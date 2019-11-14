import Init.Lean.MetavarContext
open Lean

def mkLambda (mctx : MetavarContext) (ngen : NameGenerator) (lctx : LocalContext) (xs : Array Expr) (e : Expr)
    : Except MetavarContext.MkBinding.Exception (MetavarContext × NameGenerator × Expr) :=
match MetavarContext.mkLambda xs e lctx { mctx := mctx, ngen := ngen } with
| EStateM.Result.ok e s    => Except.ok (s.mctx, s.ngen, e)
| EStateM.Result.error e s => Except.error e

def check (b : Bool) : IO Unit :=
unless b (throw "error")

def f := mkConst `f
def g := mkConst `g
def a := mkConst `a
def b := mkConst `b
def c := mkConst `c

def b0 := mkBVar 0
def b1 := mkBVar 1
def b2 := mkBVar 2

def u := Level.param `u

def typeE := Expr.sort Level.one
def natE  := mkConst `Nat
def boolE := mkConst `Bool
def vecE  := mkConst `Vec [Level.zero]

def α := mkFVar `α
def x := mkFVar `x
def y := mkFVar `y
def z := mkFVar `z
def w := mkFVar `w

def m1 := Expr.mvar `m1
def m2 := Expr.mvar `m2
def m3 := Expr.mvar `m3

def bi := BinderInfo.default
def arrow (d b : Expr) := Expr.forallE `_ bi d b

def lctx1 : LocalContext := {}
def lctx2 := lctx1.mkLocalDecl `α `α typeE
def lctx3 := lctx2.mkLocalDecl `x `x m1
def lctx4 := lctx3.mkLocalDecl `y `y (arrow natE m2)

def mctx1 : MetavarContext := {}
def mctx2  := mctx1.addExprMVarDecl `m1 `m1 lctx2 typeE
def mctx3  := mctx2.addExprMVarDecl `m2 `m2 lctx3 natE
def mctx4  := mctx3.addExprMVarDecl `m3 `m3 lctx3 natE
def mctx4' := mctx3.addExprMVarDecl `m3 `m3 lctx3 natE true

def R1 :=
match mkLambda mctx4 {namePrefix := `n} lctx4 #[α, x, y] $ mkAppN f #[m3, x] with
| Except.ok s    => s
| Except.error e => panic! (toString e)
def e1    := R1.2.2
def mctx5 := R1.1

#eval toString $ mctx5.decls.toList.map Prod.fst
#eval toString mctx5.eAssignment.toList
#eval e1
#eval check (!e1.hasFVar)

def R2 :=
match mkLambda mctx4' {namePrefix := `n} lctx4 #[α, x, y] $ mkAppN f #[m3, y] with
| Except.ok s    => s
| Except.error e => panic! (toString e)
def e2    := R2.2.2
def mctx6 := R2.1

#eval toString $ mctx6.decls.toList.map Prod.fst
#eval toString mctx6.eAssignment.toList
-- ?n.2 was delayed assigned because ?m.3 is synthetic
#eval toString $ mctx6.dAssignment.toList.map Prod.fst
#eval e2

#print "assigning ?m1 and ?n.1"
def R3 :=
let mctx := mctx6.assignExpr `m3 x;
let mctx := mctx.assignExpr (Name.mkNumeral `n 1) (Expr.lam `_ bi typeE natE);
-- ?n.2 is instantiated because we have the delayed assignment `?n.2 α x := ?m1`
(mctx.instantiateMVars e2)
def e3    := R3.1
def mctx7 := R3.2
#eval e3
-- The delayed assignment became a regular one.
#eval mctx7.getExprAssignment (Name.mkNumeral `n 2)
#eval toString $ mctx7.dAssignment.toList.map Prod.fst
