// Lean compiler output
// Module: Lean.Elab.Tactic.BVDecide.External
// Imports: Std.Tactic.BVDecide.LRAT.Parser Lean.CoreM Std.Internal.Parsec
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
lean_object* l_IO_FS_Handle_readToEnd___boxed(lean_object*, lean_object*);
lean_object* lean_io_process_child_try_wait(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* l_EIO_toBaseIO___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__6;
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parse(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* l_IO_ofExcept___at_IO_Process_output___spec__1(lean_object*, lean_object*);
lean_object* l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseLit(lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_Parser_run___rarg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___rarg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_as_task(lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___closed__2;
lean_object* lean_array_push(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__4;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__3;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_killAndWait(lean_object*, lean_object*, lean_object*);
lean_object* l_Std_Internal_Parsec_ByteArray_skipBytes(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__2;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__9;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseLines_go(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__2;
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__2;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__12;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment(lean_object*);
lean_object* lean_io_process_child_wait(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit(lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__14;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible___closed__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__16;
lean_object* lean_nat_to_int(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_killAndWait___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go___lambda__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__22;
extern lean_object* l_Std_Internal_Parsec_unexpectedEndOfInput;
lean_object* l_IO_sleep(uint32_t, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__21;
lean_object* lean_st_ref_get(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__3;
lean_object* l_Lean_addMessageContextPartial___at_Lean_Core_instAddMessageContextCoreM___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader(lean_object*);
uint8_t l_String_startsWith(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
lean_object* lean_io_process_spawn(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseLines(lean_object*);
static uint8_t l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__1;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__10;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__15;
static lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2___closed__1;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck(lean_object*);
lean_object* lean_task_get_own(lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__10;
lean_object* l_Array_append___rarg(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__15;
static uint8_t l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__11;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__20;
extern lean_object* l_Lean_Core_interruptExceptionId;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__9;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__13;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
extern lean_object* l_Task_Priority_dedicated;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__14;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__11;
lean_object* lean_string_to_utf8(lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__4;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__13;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__7;
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__1(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__1;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__7;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go___lambda__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__6;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___lambda__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
size_t lean_usize_add(size_t, size_t);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__17;
lean_object* lean_array_uget(lean_object*, size_t);
size_t lean_array_size(lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___closed__1;
lean_object* lean_io_error_to_string(lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__19;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__5;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4;
lean_object* lean_string_append(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___lambda__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__18;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__8;
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2(size_t, size_t, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
static uint8_t l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__1;
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3;
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__12;
lean_object* lean_io_process_child_kill(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l___private_Init_Data_Repr_0__Nat_reprFast(lean_object*);
static lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8;
static uint8_t _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__1() {
_start:
{
uint32_t x_1; uint8_t x_2; 
x_1 = 32;
x_2 = lean_uint32_to_uint8(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__1;
x_2 = lean_uint8_to_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__2;
x_2 = l___private_Init_Data_Repr_0__Nat_reprFast(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("expected: '", 11, 11);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__4;
x_2 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("'", 1, 1);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__7() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5;
x_2 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__6;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_byte_array_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = l_Std_Internal_Parsec_unexpectedEndOfInput;
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; uint8_t x_13; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_inc(x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_byte_array_fget(x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
x_12 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__1;
x_13 = lean_uint8_dec_eq(x_11, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
x_14 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__7;
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
else
{
lean_object* x_16; 
lean_dec(x_1);
x_16 = l_Std_Tactic_BVDecide_LRAT_Parser_Text_parseLit(x_10);
return x_16;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_Internal_Parsec_manyCore___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
lean_inc(x_2);
x_3 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_3, 1);
lean_inc(x_5);
lean_dec(x_3);
x_6 = lean_array_push(x_1, x_5);
x_1 = x_6;
x_2 = x_4;
goto _start;
}
else
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_9 = lean_ctor_get(x_3, 1);
x_10 = lean_ctor_get(x_3, 0);
lean_dec(x_10);
x_11 = lean_ctor_get(x_2, 1);
lean_inc(x_11);
x_12 = lean_nat_dec_eq(x_11, x_11);
lean_dec(x_11);
if (x_12 == 0)
{
lean_dec(x_1);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
else
{
lean_dec(x_9);
lean_ctor_set_tag(x_3, 0);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_ctor_get(x_3, 1);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_ctor_get(x_2, 1);
lean_inc(x_14);
x_15 = lean_nat_dec_eq(x_14, x_14);
lean_dec(x_14);
if (x_15 == 0)
{
lean_object* x_16; 
lean_dec(x_1);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_2);
lean_ctor_set(x_16, 1, x_13);
return x_16;
}
else
{
lean_object* x_17; 
lean_dec(x_13);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_2);
lean_ctor_set(x_17, 1, x_1);
return x_17;
}
}
}
}
}
static lean_object* _init_l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2(size_t x_1, size_t x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; 
x_4 = lean_usize_dec_lt(x_2, x_1);
if (x_4 == 0)
{
return x_3;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; size_t x_10; size_t x_11; 
x_5 = lean_array_uget(x_3, x_2);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_uset(x_3, x_2, x_6);
x_8 = l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2___closed__1;
x_9 = lean_int_dec_lt(x_8, x_5);
x_10 = 1;
x_11 = lean_usize_add(x_2, x_10);
if (x_9 == 0)
{
lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_12 = lean_nat_abs(x_5);
lean_dec(x_5);
x_13 = 0;
x_14 = lean_box(x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_14);
lean_ctor_set(x_15, 1, x_12);
x_16 = lean_array_uset(x_7, x_2, x_15);
x_2 = x_11;
x_3 = x_16;
goto _start;
}
else
{
lean_object* x_18; uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_18 = lean_nat_abs(x_5);
lean_dec(x_5);
x_19 = 1;
x_20 = lean_box(x_19);
x_21 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_18);
x_22 = lean_array_uset(x_7, x_2, x_21);
x_2 = x_11;
x_3 = x_22;
goto _start;
}
}
}
}
static uint8_t _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__1() {
_start:
{
uint32_t x_1; uint8_t x_2; 
x_1 = 118;
x_2 = lean_uint32_to_uint8(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__2() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__1;
x_2 = lean_uint8_to_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__3() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__2;
x_2 = l___private_Init_Data_Repr_0__Nat_reprFast(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__4;
x_2 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__3;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__5() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4;
x_2 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__6;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" 0", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__7;
x_2 = lean_string_to_utf8(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\r\n", 2, 2);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__10() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__9;
x_2 = lean_string_to_utf8(x_1);
return x_2;
}
}
static uint8_t _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__11() {
_start:
{
uint32_t x_1; uint8_t x_2; 
x_1 = 10;
x_2 = lean_uint32_to_uint8(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__12() {
_start:
{
uint8_t x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__11;
x_2 = lean_uint8_to_nat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__13() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__12;
x_2 = l___private_Init_Data_Repr_0__Nat_reprFast(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__14() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__4;
x_2 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__13;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__15() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__14;
x_2 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__6;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_byte_array_size(x_2);
x_5 = lean_nat_dec_lt(x_3, x_4);
lean_dec(x_4);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
lean_dec(x_2);
x_6 = l_Std_Internal_Parsec_unexpectedEndOfInput;
x_7 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_7, 0, x_1);
lean_ctor_set(x_7, 1, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; uint8_t x_13; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
lean_inc(x_2);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_2);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_byte_array_fget(x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
x_12 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__1;
x_13 = lean_uint8_dec_eq(x_11, x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_10);
x_14 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__5;
x_15 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_15, 0, x_1);
lean_ctor_set(x_15, 1, x_14);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_1);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_1, 1);
lean_dec(x_17);
x_18 = lean_ctor_get(x_1, 0);
lean_dec(x_18);
x_19 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6;
x_20 = l_Std_Internal_Parsec_manyCore___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__1(x_19, x_10);
if (lean_obj_tag(x_20) == 0)
{
uint8_t x_21; 
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; size_t x_24; size_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = lean_array_size(x_23);
x_25 = 0;
x_26 = l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2(x_24, x_25, x_23);
x_27 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8;
lean_inc(x_22);
x_28 = l_Std_Internal_Parsec_ByteArray_skipBytes(x_27, x_22);
if (lean_obj_tag(x_28) == 0)
{
uint8_t x_29; 
lean_free_object(x_20);
lean_dec(x_22);
lean_free_object(x_1);
x_29 = !lean_is_exclusive(x_28);
if (x_29 == 0)
{
lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; 
x_30 = lean_ctor_get(x_28, 1);
lean_dec(x_30);
x_31 = 1;
x_32 = lean_box(x_31);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_32);
lean_ctor_set(x_33, 1, x_26);
lean_ctor_set(x_28, 1, x_33);
return x_28;
}
else
{
lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_28, 0);
lean_inc(x_34);
lean_dec(x_28);
x_35 = 1;
x_36 = lean_box(x_35);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_36);
lean_ctor_set(x_37, 1, x_26);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_34);
lean_ctor_set(x_38, 1, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_39 = lean_ctor_get(x_28, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_28, 1);
lean_inc(x_40);
if (lean_is_exclusive(x_28)) {
 lean_ctor_release(x_28, 0);
 lean_ctor_release(x_28, 1);
 x_41 = x_28;
} else {
 lean_dec_ref(x_28);
 x_41 = lean_box(0);
}
x_65 = lean_ctor_get(x_22, 1);
lean_inc(x_65);
lean_dec(x_22);
x_66 = lean_ctor_get(x_39, 1);
lean_inc(x_66);
x_67 = lean_nat_dec_eq(x_65, x_66);
lean_dec(x_66);
lean_dec(x_65);
if (x_67 == 0)
{
lean_dec(x_41);
lean_dec(x_26);
lean_free_object(x_1);
lean_ctor_set_tag(x_20, 1);
lean_ctor_set(x_20, 1, x_40);
lean_ctor_set(x_20, 0, x_39);
return x_20;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; 
lean_dec(x_40);
x_68 = lean_ctor_get(x_39, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_39, 1);
lean_inc(x_69);
x_70 = lean_byte_array_size(x_68);
x_71 = lean_nat_dec_lt(x_69, x_70);
lean_dec(x_70);
if (x_71 == 0)
{
lean_object* x_72; 
lean_dec(x_69);
lean_dec(x_68);
lean_free_object(x_20);
lean_free_object(x_1);
x_72 = l_Std_Internal_Parsec_unexpectedEndOfInput;
lean_inc(x_39);
x_42 = x_39;
x_43 = x_72;
goto block_64;
}
else
{
lean_object* x_73; uint8_t x_74; uint8_t x_75; uint8_t x_76; 
x_73 = lean_nat_add(x_69, x_8);
lean_inc(x_68);
lean_ctor_set(x_1, 1, x_73);
lean_ctor_set(x_1, 0, x_68);
x_74 = lean_byte_array_fget(x_68, x_69);
lean_dec(x_69);
lean_dec(x_68);
x_75 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__11;
x_76 = lean_uint8_dec_eq(x_74, x_75);
if (x_76 == 0)
{
lean_object* x_77; 
lean_dec(x_1);
lean_free_object(x_20);
x_77 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__15;
lean_inc(x_39);
x_42 = x_39;
x_43 = x_77;
goto block_64;
}
else
{
uint8_t x_78; 
lean_dec(x_41);
x_78 = !lean_is_exclusive(x_39);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; uint8_t x_81; lean_object* x_82; 
x_79 = lean_ctor_get(x_39, 1);
lean_dec(x_79);
x_80 = lean_ctor_get(x_39, 0);
lean_dec(x_80);
x_81 = 0;
x_82 = lean_box(x_81);
lean_ctor_set(x_39, 1, x_26);
lean_ctor_set(x_39, 0, x_82);
lean_ctor_set(x_20, 1, x_39);
lean_ctor_set(x_20, 0, x_1);
return x_20;
}
else
{
uint8_t x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_39);
x_83 = 0;
x_84 = lean_box(x_83);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_84);
lean_ctor_set(x_85, 1, x_26);
lean_ctor_set(x_20, 1, x_85);
lean_ctor_set(x_20, 0, x_1);
return x_20;
}
}
}
}
block_64:
{
lean_object* x_44; lean_object* x_45; uint8_t x_46; 
x_44 = lean_ctor_get(x_39, 1);
lean_inc(x_44);
lean_dec(x_39);
x_45 = lean_ctor_get(x_42, 1);
lean_inc(x_45);
x_46 = lean_nat_dec_eq(x_44, x_45);
lean_dec(x_45);
lean_dec(x_44);
if (x_46 == 0)
{
lean_object* x_47; 
lean_dec(x_26);
if (lean_is_scalar(x_41)) {
 x_47 = lean_alloc_ctor(1, 2, 0);
} else {
 x_47 = x_41;
}
lean_ctor_set(x_47, 0, x_42);
lean_ctor_set(x_47, 1, x_43);
return x_47;
}
else
{
lean_object* x_48; lean_object* x_49; 
lean_dec(x_43);
lean_dec(x_41);
x_48 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__10;
x_49 = l_Std_Internal_Parsec_ByteArray_skipBytes(x_48, x_42);
if (lean_obj_tag(x_49) == 0)
{
uint8_t x_50; 
x_50 = !lean_is_exclusive(x_49);
if (x_50 == 0)
{
lean_object* x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; 
x_51 = lean_ctor_get(x_49, 1);
lean_dec(x_51);
x_52 = 0;
x_53 = lean_box(x_52);
x_54 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_54, 0, x_53);
lean_ctor_set(x_54, 1, x_26);
lean_ctor_set(x_49, 1, x_54);
return x_49;
}
else
{
lean_object* x_55; uint8_t x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_55 = lean_ctor_get(x_49, 0);
lean_inc(x_55);
lean_dec(x_49);
x_56 = 0;
x_57 = lean_box(x_56);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_26);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_55);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
else
{
uint8_t x_60; 
lean_dec(x_26);
x_60 = !lean_is_exclusive(x_49);
if (x_60 == 0)
{
return x_49;
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_61 = lean_ctor_get(x_49, 0);
x_62 = lean_ctor_get(x_49, 1);
lean_inc(x_62);
lean_inc(x_61);
lean_dec(x_49);
x_63 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set(x_63, 1, x_62);
return x_63;
}
}
}
}
}
}
else
{
lean_object* x_86; lean_object* x_87; size_t x_88; size_t x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; 
x_86 = lean_ctor_get(x_20, 0);
x_87 = lean_ctor_get(x_20, 1);
lean_inc(x_87);
lean_inc(x_86);
lean_dec(x_20);
x_88 = lean_array_size(x_87);
x_89 = 0;
x_90 = l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2(x_88, x_89, x_87);
x_91 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8;
lean_inc(x_86);
x_92 = l_Std_Internal_Parsec_ByteArray_skipBytes(x_91, x_86);
if (lean_obj_tag(x_92) == 0)
{
lean_object* x_93; lean_object* x_94; uint8_t x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_86);
lean_free_object(x_1);
x_93 = lean_ctor_get(x_92, 0);
lean_inc(x_93);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_94 = x_92;
} else {
 lean_dec_ref(x_92);
 x_94 = lean_box(0);
}
x_95 = 1;
x_96 = lean_box(x_95);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_96);
lean_ctor_set(x_97, 1, x_90);
if (lean_is_scalar(x_94)) {
 x_98 = lean_alloc_ctor(0, 2, 0);
} else {
 x_98 = x_94;
}
lean_ctor_set(x_98, 0, x_93);
lean_ctor_set(x_98, 1, x_97);
return x_98;
}
else
{
lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_121; lean_object* x_122; uint8_t x_123; 
x_99 = lean_ctor_get(x_92, 0);
lean_inc(x_99);
x_100 = lean_ctor_get(x_92, 1);
lean_inc(x_100);
if (lean_is_exclusive(x_92)) {
 lean_ctor_release(x_92, 0);
 lean_ctor_release(x_92, 1);
 x_101 = x_92;
} else {
 lean_dec_ref(x_92);
 x_101 = lean_box(0);
}
x_121 = lean_ctor_get(x_86, 1);
lean_inc(x_121);
lean_dec(x_86);
x_122 = lean_ctor_get(x_99, 1);
lean_inc(x_122);
x_123 = lean_nat_dec_eq(x_121, x_122);
lean_dec(x_122);
lean_dec(x_121);
if (x_123 == 0)
{
lean_object* x_124; 
lean_dec(x_101);
lean_dec(x_90);
lean_free_object(x_1);
x_124 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_124, 0, x_99);
lean_ctor_set(x_124, 1, x_100);
return x_124;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; 
lean_dec(x_100);
x_125 = lean_ctor_get(x_99, 0);
lean_inc(x_125);
x_126 = lean_ctor_get(x_99, 1);
lean_inc(x_126);
x_127 = lean_byte_array_size(x_125);
x_128 = lean_nat_dec_lt(x_126, x_127);
lean_dec(x_127);
if (x_128 == 0)
{
lean_object* x_129; 
lean_dec(x_126);
lean_dec(x_125);
lean_free_object(x_1);
x_129 = l_Std_Internal_Parsec_unexpectedEndOfInput;
lean_inc(x_99);
x_102 = x_99;
x_103 = x_129;
goto block_120;
}
else
{
lean_object* x_130; uint8_t x_131; uint8_t x_132; uint8_t x_133; 
x_130 = lean_nat_add(x_126, x_8);
lean_inc(x_125);
lean_ctor_set(x_1, 1, x_130);
lean_ctor_set(x_1, 0, x_125);
x_131 = lean_byte_array_fget(x_125, x_126);
lean_dec(x_126);
lean_dec(x_125);
x_132 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__11;
x_133 = lean_uint8_dec_eq(x_131, x_132);
if (x_133 == 0)
{
lean_object* x_134; 
lean_dec(x_1);
x_134 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__15;
lean_inc(x_99);
x_102 = x_99;
x_103 = x_134;
goto block_120;
}
else
{
lean_object* x_135; uint8_t x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; 
lean_dec(x_101);
if (lean_is_exclusive(x_99)) {
 lean_ctor_release(x_99, 0);
 lean_ctor_release(x_99, 1);
 x_135 = x_99;
} else {
 lean_dec_ref(x_99);
 x_135 = lean_box(0);
}
x_136 = 0;
x_137 = lean_box(x_136);
if (lean_is_scalar(x_135)) {
 x_138 = lean_alloc_ctor(0, 2, 0);
} else {
 x_138 = x_135;
}
lean_ctor_set(x_138, 0, x_137);
lean_ctor_set(x_138, 1, x_90);
x_139 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_139, 0, x_1);
lean_ctor_set(x_139, 1, x_138);
return x_139;
}
}
}
block_120:
{
lean_object* x_104; lean_object* x_105; uint8_t x_106; 
x_104 = lean_ctor_get(x_99, 1);
lean_inc(x_104);
lean_dec(x_99);
x_105 = lean_ctor_get(x_102, 1);
lean_inc(x_105);
x_106 = lean_nat_dec_eq(x_104, x_105);
lean_dec(x_105);
lean_dec(x_104);
if (x_106 == 0)
{
lean_object* x_107; 
lean_dec(x_90);
if (lean_is_scalar(x_101)) {
 x_107 = lean_alloc_ctor(1, 2, 0);
} else {
 x_107 = x_101;
}
lean_ctor_set(x_107, 0, x_102);
lean_ctor_set(x_107, 1, x_103);
return x_107;
}
else
{
lean_object* x_108; lean_object* x_109; 
lean_dec(x_103);
lean_dec(x_101);
x_108 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__10;
x_109 = l_Std_Internal_Parsec_ByteArray_skipBytes(x_108, x_102);
if (lean_obj_tag(x_109) == 0)
{
lean_object* x_110; lean_object* x_111; uint8_t x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; 
x_110 = lean_ctor_get(x_109, 0);
lean_inc(x_110);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_111 = x_109;
} else {
 lean_dec_ref(x_109);
 x_111 = lean_box(0);
}
x_112 = 0;
x_113 = lean_box(x_112);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_113);
lean_ctor_set(x_114, 1, x_90);
if (lean_is_scalar(x_111)) {
 x_115 = lean_alloc_ctor(0, 2, 0);
} else {
 x_115 = x_111;
}
lean_ctor_set(x_115, 0, x_110);
lean_ctor_set(x_115, 1, x_114);
return x_115;
}
else
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
lean_dec(x_90);
x_116 = lean_ctor_get(x_109, 0);
lean_inc(x_116);
x_117 = lean_ctor_get(x_109, 1);
lean_inc(x_117);
if (lean_is_exclusive(x_109)) {
 lean_ctor_release(x_109, 0);
 lean_ctor_release(x_109, 1);
 x_118 = x_109;
} else {
 lean_dec_ref(x_109);
 x_118 = lean_box(0);
}
if (lean_is_scalar(x_118)) {
 x_119 = lean_alloc_ctor(1, 2, 0);
} else {
 x_119 = x_118;
}
lean_ctor_set(x_119, 0, x_116);
lean_ctor_set(x_119, 1, x_117);
return x_119;
}
}
}
}
}
}
else
{
uint8_t x_140; 
lean_free_object(x_1);
x_140 = !lean_is_exclusive(x_20);
if (x_140 == 0)
{
return x_20;
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; 
x_141 = lean_ctor_get(x_20, 0);
x_142 = lean_ctor_get(x_20, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_20);
x_143 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_143, 0, x_141);
lean_ctor_set(x_143, 1, x_142);
return x_143;
}
}
}
else
{
lean_object* x_144; lean_object* x_145; 
lean_dec(x_1);
x_144 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6;
x_145 = l_Std_Internal_Parsec_manyCore___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__1(x_144, x_10);
if (lean_obj_tag(x_145) == 0)
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; size_t x_149; size_t x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
x_146 = lean_ctor_get(x_145, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 1);
lean_inc(x_147);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_148 = x_145;
} else {
 lean_dec_ref(x_145);
 x_148 = lean_box(0);
}
x_149 = lean_array_size(x_147);
x_150 = 0;
x_151 = l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2(x_149, x_150, x_147);
x_152 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8;
lean_inc(x_146);
x_153 = l_Std_Internal_Parsec_ByteArray_skipBytes(x_152, x_146);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; lean_object* x_155; uint8_t x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; 
lean_dec(x_148);
lean_dec(x_146);
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_155 = x_153;
} else {
 lean_dec_ref(x_153);
 x_155 = lean_box(0);
}
x_156 = 1;
x_157 = lean_box(x_156);
x_158 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_158, 0, x_157);
lean_ctor_set(x_158, 1, x_151);
if (lean_is_scalar(x_155)) {
 x_159 = lean_alloc_ctor(0, 2, 0);
} else {
 x_159 = x_155;
}
lean_ctor_set(x_159, 0, x_154);
lean_ctor_set(x_159, 1, x_158);
return x_159;
}
else
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_182; lean_object* x_183; uint8_t x_184; 
x_160 = lean_ctor_get(x_153, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_153, 1);
lean_inc(x_161);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 lean_ctor_release(x_153, 1);
 x_162 = x_153;
} else {
 lean_dec_ref(x_153);
 x_162 = lean_box(0);
}
x_182 = lean_ctor_get(x_146, 1);
lean_inc(x_182);
lean_dec(x_146);
x_183 = lean_ctor_get(x_160, 1);
lean_inc(x_183);
x_184 = lean_nat_dec_eq(x_182, x_183);
lean_dec(x_183);
lean_dec(x_182);
if (x_184 == 0)
{
lean_object* x_185; 
lean_dec(x_162);
lean_dec(x_151);
if (lean_is_scalar(x_148)) {
 x_185 = lean_alloc_ctor(1, 2, 0);
} else {
 x_185 = x_148;
 lean_ctor_set_tag(x_185, 1);
}
lean_ctor_set(x_185, 0, x_160);
lean_ctor_set(x_185, 1, x_161);
return x_185;
}
else
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; uint8_t x_189; 
lean_dec(x_161);
x_186 = lean_ctor_get(x_160, 0);
lean_inc(x_186);
x_187 = lean_ctor_get(x_160, 1);
lean_inc(x_187);
x_188 = lean_byte_array_size(x_186);
x_189 = lean_nat_dec_lt(x_187, x_188);
lean_dec(x_188);
if (x_189 == 0)
{
lean_object* x_190; 
lean_dec(x_187);
lean_dec(x_186);
lean_dec(x_148);
x_190 = l_Std_Internal_Parsec_unexpectedEndOfInput;
lean_inc(x_160);
x_163 = x_160;
x_164 = x_190;
goto block_181;
}
else
{
lean_object* x_191; lean_object* x_192; uint8_t x_193; uint8_t x_194; uint8_t x_195; 
x_191 = lean_nat_add(x_187, x_8);
lean_inc(x_186);
x_192 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_192, 0, x_186);
lean_ctor_set(x_192, 1, x_191);
x_193 = lean_byte_array_fget(x_186, x_187);
lean_dec(x_187);
lean_dec(x_186);
x_194 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__11;
x_195 = lean_uint8_dec_eq(x_193, x_194);
if (x_195 == 0)
{
lean_object* x_196; 
lean_dec(x_192);
lean_dec(x_148);
x_196 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__15;
lean_inc(x_160);
x_163 = x_160;
x_164 = x_196;
goto block_181;
}
else
{
lean_object* x_197; uint8_t x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec(x_162);
if (lean_is_exclusive(x_160)) {
 lean_ctor_release(x_160, 0);
 lean_ctor_release(x_160, 1);
 x_197 = x_160;
} else {
 lean_dec_ref(x_160);
 x_197 = lean_box(0);
}
x_198 = 0;
x_199 = lean_box(x_198);
if (lean_is_scalar(x_197)) {
 x_200 = lean_alloc_ctor(0, 2, 0);
} else {
 x_200 = x_197;
}
lean_ctor_set(x_200, 0, x_199);
lean_ctor_set(x_200, 1, x_151);
if (lean_is_scalar(x_148)) {
 x_201 = lean_alloc_ctor(0, 2, 0);
} else {
 x_201 = x_148;
}
lean_ctor_set(x_201, 0, x_192);
lean_ctor_set(x_201, 1, x_200);
return x_201;
}
}
}
block_181:
{
lean_object* x_165; lean_object* x_166; uint8_t x_167; 
x_165 = lean_ctor_get(x_160, 1);
lean_inc(x_165);
lean_dec(x_160);
x_166 = lean_ctor_get(x_163, 1);
lean_inc(x_166);
x_167 = lean_nat_dec_eq(x_165, x_166);
lean_dec(x_166);
lean_dec(x_165);
if (x_167 == 0)
{
lean_object* x_168; 
lean_dec(x_151);
if (lean_is_scalar(x_162)) {
 x_168 = lean_alloc_ctor(1, 2, 0);
} else {
 x_168 = x_162;
}
lean_ctor_set(x_168, 0, x_163);
lean_ctor_set(x_168, 1, x_164);
return x_168;
}
else
{
lean_object* x_169; lean_object* x_170; 
lean_dec(x_164);
lean_dec(x_162);
x_169 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__10;
x_170 = l_Std_Internal_Parsec_ByteArray_skipBytes(x_169, x_163);
if (lean_obj_tag(x_170) == 0)
{
lean_object* x_171; lean_object* x_172; uint8_t x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_171 = lean_ctor_get(x_170, 0);
lean_inc(x_171);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_172 = x_170;
} else {
 lean_dec_ref(x_170);
 x_172 = lean_box(0);
}
x_173 = 0;
x_174 = lean_box(x_173);
x_175 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_175, 0, x_174);
lean_ctor_set(x_175, 1, x_151);
if (lean_is_scalar(x_172)) {
 x_176 = lean_alloc_ctor(0, 2, 0);
} else {
 x_176 = x_172;
}
lean_ctor_set(x_176, 0, x_171);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; 
lean_dec(x_151);
x_177 = lean_ctor_get(x_170, 0);
lean_inc(x_177);
x_178 = lean_ctor_get(x_170, 1);
lean_inc(x_178);
if (lean_is_exclusive(x_170)) {
 lean_ctor_release(x_170, 0);
 lean_ctor_release(x_170, 1);
 x_179 = x_170;
} else {
 lean_dec_ref(x_170);
 x_179 = lean_box(0);
}
if (lean_is_scalar(x_179)) {
 x_180 = lean_alloc_ctor(1, 2, 0);
} else {
 x_180 = x_179;
}
lean_ctor_set(x_180, 0, x_177);
lean_ctor_set(x_180, 1, x_178);
return x_180;
}
}
}
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
x_202 = lean_ctor_get(x_145, 0);
lean_inc(x_202);
x_203 = lean_ctor_get(x_145, 1);
lean_inc(x_203);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_204 = x_145;
} else {
 lean_dec_ref(x_145);
 x_204 = lean_box(0);
}
if (lean_is_scalar(x_204)) {
 x_205 = lean_alloc_ctor(1, 2, 0);
} else {
 x_205 = x_204;
}
lean_ctor_set(x_205, 0, x_202);
lean_ctor_set(x_205, 1, x_203);
return x_205;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; size_t x_5; lean_object* x_6; 
x_4 = lean_unbox_usize(x_1);
lean_dec(x_1);
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2(x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseLines_go(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment(x_2);
if (lean_obj_tag(x_3) == 0)
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_5 = lean_ctor_get(x_3, 1);
x_6 = lean_ctor_get(x_3, 0);
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_5, 1);
lean_inc(x_8);
lean_dec(x_5);
x_9 = l_Array_append___rarg(x_1, x_8);
lean_dec(x_8);
x_10 = lean_unbox(x_7);
lean_dec(x_7);
if (x_10 == 0)
{
lean_free_object(x_3);
x_1 = x_9;
x_2 = x_6;
goto _start;
}
else
{
lean_ctor_set(x_3, 1, x_9);
return x_3;
}
}
else
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_12 = lean_ctor_get(x_3, 1);
x_13 = lean_ctor_get(x_3, 0);
lean_inc(x_12);
lean_inc(x_13);
lean_dec(x_3);
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
x_15 = lean_ctor_get(x_12, 1);
lean_inc(x_15);
lean_dec(x_12);
x_16 = l_Array_append___rarg(x_1, x_15);
lean_dec(x_15);
x_17 = lean_unbox(x_14);
lean_dec(x_14);
if (x_17 == 0)
{
x_1 = x_16;
x_2 = x_13;
goto _start;
}
else
{
lean_object* x_19; 
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_13);
lean_ctor_set(x_19, 1, x_16);
return x_19;
}
}
}
else
{
uint8_t x_20; 
lean_dec(x_1);
x_20 = !lean_is_exclusive(x_3);
if (x_20 == 0)
{
return x_3;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_3, 0);
x_22 = lean_ctor_get(x_3, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_3);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseLines(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6;
x_3 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseLines_go(x_2, x_1);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("s SATISFIABLE", 13, 13);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1;
x_2 = lean_string_to_utf8(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__2;
x_3 = l_Std_Internal_Parsec_ByteArray_skipBytes(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_25; lean_object* x_26; lean_object* x_27; uint8_t x_28; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5 = lean_box(0);
}
x_25 = lean_ctor_get(x_4, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_4, 1);
lean_inc(x_26);
x_27 = lean_byte_array_size(x_25);
x_28 = lean_nat_dec_lt(x_26, x_27);
lean_dec(x_27);
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_26);
lean_dec(x_25);
x_29 = l_Std_Internal_Parsec_unexpectedEndOfInput;
lean_inc(x_4);
x_6 = x_4;
x_7 = x_29;
goto block_24;
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; uint8_t x_35; 
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_26, x_30);
lean_inc(x_25);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_25);
lean_ctor_set(x_32, 1, x_31);
x_33 = lean_byte_array_fget(x_25, x_26);
lean_dec(x_26);
lean_dec(x_25);
x_34 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__11;
x_35 = lean_uint8_dec_eq(x_33, x_34);
if (x_35 == 0)
{
lean_object* x_36; 
lean_dec(x_32);
x_36 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__15;
lean_inc(x_4);
x_6 = x_4;
x_7 = x_36;
goto block_24;
}
else
{
uint8_t x_37; 
lean_dec(x_5);
x_37 = !lean_is_exclusive(x_4);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; 
x_38 = lean_ctor_get(x_4, 1);
lean_dec(x_38);
x_39 = lean_ctor_get(x_4, 0);
lean_dec(x_39);
x_40 = lean_box(0);
lean_ctor_set(x_4, 1, x_40);
lean_ctor_set(x_4, 0, x_32);
return x_4;
}
else
{
lean_object* x_41; lean_object* x_42; 
lean_dec(x_4);
x_41 = lean_box(0);
x_42 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_42, 0, x_32);
lean_ctor_set(x_42, 1, x_41);
return x_42;
}
}
}
block_24:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
if (lean_is_scalar(x_5)) {
 x_11 = lean_alloc_ctor(1, 2, 0);
} else {
 x_11 = x_5;
 lean_ctor_set_tag(x_11, 1);
}
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_5);
x_12 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__10;
x_13 = l_Std_Internal_Parsec_ByteArray_skipBytes(x_12, x_6);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 1);
lean_dec(x_15);
x_16 = lean_box(0);
lean_ctor_set(x_13, 1, x_16);
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 0);
lean_inc(x_17);
lean_dec(x_13);
x_18 = lean_box(0);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
else
{
uint8_t x_20; 
x_20 = !lean_is_exclusive(x_13);
if (x_20 == 0)
{
return x_13;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_13, 0);
x_22 = lean_ctor_get(x_13, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_13);
x_23 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_23, 0, x_21);
lean_ctor_set(x_23, 1, x_22);
return x_23;
}
}
}
}
}
else
{
uint8_t x_43; 
x_43 = !lean_is_exclusive(x_3);
if (x_43 == 0)
{
return x_3;
}
else
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_44 = lean_ctor_get(x_3, 0);
x_45 = lean_ctor_get(x_3, 1);
lean_inc(x_45);
lean_inc(x_44);
lean_dec(x_3);
x_46 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_46, 0, x_44);
lean_ctor_set(x_46, 1, x_45);
return x_46;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parse(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__2;
x_3 = l_Std_Internal_Parsec_ByteArray_skipBytes(x_2, x_1);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_5 = x_3;
} else {
 lean_dec_ref(x_3);
 x_5 = lean_box(0);
}
x_21 = lean_ctor_get(x_4, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_4, 1);
lean_inc(x_22);
x_23 = lean_byte_array_size(x_21);
x_24 = lean_nat_dec_lt(x_22, x_23);
lean_dec(x_23);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_22);
lean_dec(x_21);
x_25 = l_Std_Internal_Parsec_unexpectedEndOfInput;
lean_inc(x_4);
x_6 = x_4;
x_7 = x_25;
goto block_20;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; uint8_t x_30; uint8_t x_31; 
x_26 = lean_unsigned_to_nat(1u);
x_27 = lean_nat_add(x_22, x_26);
lean_inc(x_21);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_21);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_byte_array_fget(x_21, x_22);
lean_dec(x_22);
lean_dec(x_21);
x_30 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__11;
x_31 = lean_uint8_dec_eq(x_29, x_30);
if (x_31 == 0)
{
lean_object* x_32; 
lean_dec(x_28);
x_32 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__15;
lean_inc(x_4);
x_6 = x_4;
x_7 = x_32;
goto block_20;
}
else
{
lean_object* x_33; 
lean_dec(x_5);
lean_dec(x_4);
x_33 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseLines(x_28);
return x_33;
}
}
block_20:
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_ctor_get(x_4, 1);
lean_inc(x_8);
lean_dec(x_4);
x_9 = lean_ctor_get(x_6, 1);
lean_inc(x_9);
x_10 = lean_nat_dec_eq(x_8, x_9);
lean_dec(x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_object* x_11; 
if (lean_is_scalar(x_5)) {
 x_11 = lean_alloc_ctor(1, 2, 0);
} else {
 x_11 = x_5;
 lean_ctor_set_tag(x_11, 1);
}
lean_ctor_set(x_11, 0, x_6);
lean_ctor_set(x_11, 1, x_7);
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_7);
lean_dec(x_5);
x_12 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__10;
x_13 = l_Std_Internal_Parsec_ByteArray_skipBytes(x_12, x_6);
if (lean_obj_tag(x_13) == 0)
{
lean_object* x_14; lean_object* x_15; 
x_14 = lean_ctor_get(x_13, 0);
lean_inc(x_14);
lean_dec(x_13);
x_15 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseLines(x_14);
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_13);
if (x_16 == 0)
{
return x_13;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_17 = lean_ctor_get(x_13, 0);
x_18 = lean_ctor_get(x_13, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_13);
x_19 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
return x_19;
}
}
}
}
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_3);
if (x_34 == 0)
{
return x_3;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_35 = lean_ctor_get(x_3, 0);
x_36 = lean_ctor_get(x_3, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_3);
x_37 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_37, 0, x_35);
lean_ctor_set(x_37, 1, x_36);
return x_37;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_apply_3(x_1, x_3, x_4, x_5);
return x_6;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = l_Lean_Core_interruptExceptionId;
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___closed__2() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_box(0);
x_2 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___closed__1;
x_3 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_3, 0, x_2);
lean_ctor_set(x_3, 1, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lean_ctor_get(x_3, 11);
lean_inc(x_6);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec(x_1);
x_7 = lean_apply_3(x_2, x_3, x_4, x_5);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec(x_6);
x_9 = lean_st_ref_get(x_8, x_5);
lean_dec(x_8);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_unbox(x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_1);
x_12 = lean_ctor_get(x_9, 1);
lean_inc(x_12);
lean_dec(x_9);
x_13 = lean_apply_3(x_2, x_3, x_4, x_12);
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; 
lean_dec(x_2);
x_14 = lean_ctor_get(x_9, 1);
lean_inc(x_14);
lean_dec(x_9);
x_15 = lean_apply_3(x_1, x_3, x_4, x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; 
x_17 = lean_ctor_get(x_15, 0);
lean_dec(x_17);
x_18 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___closed__2;
lean_ctor_set_tag(x_15, 1);
lean_ctor_set(x_15, 0, x_18);
return x_15;
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_ctor_get(x_15, 1);
lean_inc(x_19);
lean_dec(x_15);
x_20 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___closed__2;
x_21 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_21, 0, x_20);
lean_ctor_set(x_21, 1, x_19);
return x_21;
}
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_15);
if (x_22 == 0)
{
return x_15;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_23 = lean_ctor_get(x_15, 0);
x_24 = lean_ctor_get(x_15, 1);
lean_inc(x_24);
lean_inc(x_23);
lean_dec(x_15);
x_25 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_25, 0, x_23);
lean_ctor_set(x_25, 1, x_24);
return x_25;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg), 5, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___rarg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(0u);
x_8 = lean_nat_dec_eq(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; 
lean_dec(x_2);
x_9 = lean_apply_3(x_3, x_4, x_5, x_6);
return x_9;
}
else
{
lean_object* x_10; 
lean_dec(x_3);
x_10 = lean_apply_3(x_2, x_4, x_5, x_6);
if (lean_obj_tag(x_10) == 0)
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_ctor_get(x_10, 0);
lean_dec(x_12);
x_13 = lean_box(1);
lean_ctor_set(x_10, 0, x_13);
return x_10;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_10, 1);
lean_inc(x_14);
lean_dec(x_10);
x_15 = lean_box(1);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_15);
lean_ctor_set(x_16, 1, x_14);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_10);
if (x_17 == 0)
{
return x_10;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_10, 0);
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_10);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___rarg___boxed), 6, 0);
return x_2;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___rarg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___rarg(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_killAndWait(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lean_io_process_child_kill(x_1, x_2, x_3);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_ctor_get(x_4, 1);
lean_inc(x_5);
lean_dec(x_4);
x_6 = lean_io_process_child_wait(x_1, x_2, x_5);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_dec(x_8);
x_9 = lean_box(0);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_ctor_get(x_6, 1);
lean_inc(x_10);
lean_dec(x_6);
x_11 = lean_box(0);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_10);
return x_12;
}
}
else
{
uint8_t x_13; 
x_13 = !lean_is_exclusive(x_6);
if (x_13 == 0)
{
return x_6;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_6, 0);
x_15 = lean_ctor_get(x_6, 1);
lean_inc(x_15);
lean_inc(x_14);
lean_dec(x_6);
x_16 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_16, 0, x_14);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_4);
if (x_17 == 0)
{
return x_4;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_18 = lean_ctor_get(x_4, 0);
x_19 = lean_ctor_get(x_4, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_4);
x_20 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
return x_20;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_killAndWait___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_killAndWait(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go___lambda__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_3, 5);
x_7 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_killAndWait(x_1, x_2, x_5);
if (lean_obj_tag(x_7) == 0)
{
uint8_t x_8; 
x_8 = !lean_is_exclusive(x_7);
if (x_8 == 0)
{
return x_7;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_ctor_get(x_7, 0);
x_10 = lean_ctor_get(x_7, 1);
lean_inc(x_10);
lean_inc(x_9);
lean_dec(x_7);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set(x_11, 1, x_10);
return x_11;
}
}
else
{
uint8_t x_12; 
x_12 = !lean_is_exclusive(x_7);
if (x_12 == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_ctor_get(x_7, 0);
x_14 = lean_io_error_to_string(x_13);
x_15 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = l_Lean_MessageData_ofFormat(x_15);
lean_inc(x_6);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_6);
lean_ctor_set(x_17, 1, x_16);
lean_ctor_set(x_7, 0, x_17);
return x_7;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_18 = lean_ctor_get(x_7, 0);
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_7);
x_20 = lean_io_error_to_string(x_18);
x_21 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_21, 0, x_20);
x_22 = l_Lean_MessageData_ofFormat(x_21);
lean_inc(x_6);
x_23 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_23, 0, x_6);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set(x_24, 1, x_19);
return x_24;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go___lambda__2(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_ctor_get(x_6, 5);
lean_inc(x_9);
x_10 = lean_io_process_child_try_wait(x_1, x_2, x_8);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; 
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
if (lean_obj_tag(x_11) == 0)
{
lean_object* x_12; uint32_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
lean_dec(x_9);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = 50;
x_14 = l_IO_sleep(x_13, x_12);
x_15 = lean_ctor_get(x_14, 1);
lean_inc(x_15);
lean_dec(x_14);
x_16 = lean_unsigned_to_nat(50u);
x_17 = lean_nat_sub(x_3, x_16);
x_18 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go(x_1, x_17, x_2, x_4, x_5, x_6, x_7, x_15);
return x_18;
}
else
{
lean_object* x_19; uint8_t x_20; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_2);
lean_dec(x_1);
x_19 = lean_ctor_get(x_10, 1);
lean_inc(x_19);
lean_dec(x_10);
x_20 = !lean_is_exclusive(x_11);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = lean_ctor_get(x_11, 0);
x_22 = lean_task_get_own(x_4);
x_23 = l_IO_ofExcept___at_IO_Process_output___spec__1(x_22, x_19);
if (lean_obj_tag(x_23) == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_task_get_own(x_5);
x_27 = l_IO_ofExcept___at_IO_Process_output___spec__1(x_26, x_25);
if (lean_obj_tag(x_27) == 0)
{
uint8_t x_28; 
lean_dec(x_9);
x_28 = !lean_is_exclusive(x_27);
if (x_28 == 0)
{
lean_object* x_29; lean_object* x_30; uint32_t x_31; 
x_29 = lean_ctor_get(x_27, 0);
x_30 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_30, 0, x_24);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_unbox_uint32(x_21);
lean_dec(x_21);
lean_ctor_set_uint32(x_30, sizeof(void*)*2, x_31);
lean_ctor_set_tag(x_11, 0);
lean_ctor_set(x_11, 0, x_30);
lean_ctor_set(x_27, 0, x_11);
return x_27;
}
else
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; uint32_t x_35; lean_object* x_36; 
x_32 = lean_ctor_get(x_27, 0);
x_33 = lean_ctor_get(x_27, 1);
lean_inc(x_33);
lean_inc(x_32);
lean_dec(x_27);
x_34 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_34, 0, x_24);
lean_ctor_set(x_34, 1, x_32);
x_35 = lean_unbox_uint32(x_21);
lean_dec(x_21);
lean_ctor_set_uint32(x_34, sizeof(void*)*2, x_35);
lean_ctor_set_tag(x_11, 0);
lean_ctor_set(x_11, 0, x_34);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_11);
lean_ctor_set(x_36, 1, x_33);
return x_36;
}
}
else
{
uint8_t x_37; 
lean_dec(x_24);
lean_dec(x_21);
x_37 = !lean_is_exclusive(x_27);
if (x_37 == 0)
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_38 = lean_ctor_get(x_27, 0);
x_39 = lean_io_error_to_string(x_38);
lean_ctor_set_tag(x_11, 3);
lean_ctor_set(x_11, 0, x_39);
x_40 = l_Lean_MessageData_ofFormat(x_11);
x_41 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_41, 0, x_9);
lean_ctor_set(x_41, 1, x_40);
lean_ctor_set(x_27, 0, x_41);
return x_27;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; 
x_42 = lean_ctor_get(x_27, 0);
x_43 = lean_ctor_get(x_27, 1);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_27);
x_44 = lean_io_error_to_string(x_42);
lean_ctor_set_tag(x_11, 3);
lean_ctor_set(x_11, 0, x_44);
x_45 = l_Lean_MessageData_ofFormat(x_11);
x_46 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_46, 0, x_9);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_43);
return x_47;
}
}
}
else
{
uint8_t x_48; 
lean_dec(x_21);
lean_dec(x_5);
x_48 = !lean_is_exclusive(x_23);
if (x_48 == 0)
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; 
x_49 = lean_ctor_get(x_23, 0);
x_50 = lean_io_error_to_string(x_49);
lean_ctor_set_tag(x_11, 3);
lean_ctor_set(x_11, 0, x_50);
x_51 = l_Lean_MessageData_ofFormat(x_11);
x_52 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_52, 0, x_9);
lean_ctor_set(x_52, 1, x_51);
lean_ctor_set(x_23, 0, x_52);
return x_23;
}
else
{
lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_53 = lean_ctor_get(x_23, 0);
x_54 = lean_ctor_get(x_23, 1);
lean_inc(x_54);
lean_inc(x_53);
lean_dec(x_23);
x_55 = lean_io_error_to_string(x_53);
lean_ctor_set_tag(x_11, 3);
lean_ctor_set(x_11, 0, x_55);
x_56 = l_Lean_MessageData_ofFormat(x_11);
x_57 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_57, 0, x_9);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_54);
return x_58;
}
}
}
else
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_59 = lean_ctor_get(x_11, 0);
lean_inc(x_59);
lean_dec(x_11);
x_60 = lean_task_get_own(x_4);
x_61 = l_IO_ofExcept___at_IO_Process_output___spec__1(x_60, x_19);
if (lean_obj_tag(x_61) == 0)
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lean_task_get_own(x_5);
x_65 = l_IO_ofExcept___at_IO_Process_output___spec__1(x_64, x_63);
if (lean_obj_tag(x_65) == 0)
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint32_t x_70; lean_object* x_71; lean_object* x_72; 
lean_dec(x_9);
x_66 = lean_ctor_get(x_65, 0);
lean_inc(x_66);
x_67 = lean_ctor_get(x_65, 1);
lean_inc(x_67);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_68 = x_65;
} else {
 lean_dec_ref(x_65);
 x_68 = lean_box(0);
}
x_69 = lean_alloc_ctor(0, 2, 4);
lean_ctor_set(x_69, 0, x_62);
lean_ctor_set(x_69, 1, x_66);
x_70 = lean_unbox_uint32(x_59);
lean_dec(x_59);
lean_ctor_set_uint32(x_69, sizeof(void*)*2, x_70);
x_71 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_71, 0, x_69);
if (lean_is_scalar(x_68)) {
 x_72 = lean_alloc_ctor(0, 2, 0);
} else {
 x_72 = x_68;
}
lean_ctor_set(x_72, 0, x_71);
lean_ctor_set(x_72, 1, x_67);
return x_72;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
lean_dec(x_62);
lean_dec(x_59);
x_73 = lean_ctor_get(x_65, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_65, 1);
lean_inc(x_74);
if (lean_is_exclusive(x_65)) {
 lean_ctor_release(x_65, 0);
 lean_ctor_release(x_65, 1);
 x_75 = x_65;
} else {
 lean_dec_ref(x_65);
 x_75 = lean_box(0);
}
x_76 = lean_io_error_to_string(x_73);
x_77 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_77, 0, x_76);
x_78 = l_Lean_MessageData_ofFormat(x_77);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_9);
lean_ctor_set(x_79, 1, x_78);
if (lean_is_scalar(x_75)) {
 x_80 = lean_alloc_ctor(1, 2, 0);
} else {
 x_80 = x_75;
}
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_80, 1, x_74);
return x_80;
}
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; 
lean_dec(x_59);
lean_dec(x_5);
x_81 = lean_ctor_get(x_61, 0);
lean_inc(x_81);
x_82 = lean_ctor_get(x_61, 1);
lean_inc(x_82);
if (lean_is_exclusive(x_61)) {
 lean_ctor_release(x_61, 0);
 lean_ctor_release(x_61, 1);
 x_83 = x_61;
} else {
 lean_dec_ref(x_61);
 x_83 = lean_box(0);
}
x_84 = lean_io_error_to_string(x_81);
x_85 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_85, 0, x_84);
x_86 = l_Lean_MessageData_ofFormat(x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_9);
lean_ctor_set(x_87, 1, x_86);
if (lean_is_scalar(x_83)) {
 x_88 = lean_alloc_ctor(1, 2, 0);
} else {
 x_88 = x_83;
}
lean_ctor_set(x_88, 0, x_87);
lean_ctor_set(x_88, 1, x_82);
return x_88;
}
}
}
}
else
{
uint8_t x_89; 
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
lean_dec(x_1);
x_89 = !lean_is_exclusive(x_10);
if (x_89 == 0)
{
lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; 
x_90 = lean_ctor_get(x_10, 0);
x_91 = lean_io_error_to_string(x_90);
x_92 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_92, 0, x_91);
x_93 = l_Lean_MessageData_ofFormat(x_92);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_9);
lean_ctor_set(x_94, 1, x_93);
lean_ctor_set(x_10, 0, x_94);
return x_10;
}
else
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; 
x_95 = lean_ctor_get(x_10, 0);
x_96 = lean_ctor_get(x_10, 1);
lean_inc(x_96);
lean_inc(x_95);
lean_dec(x_10);
x_97 = lean_io_error_to_string(x_95);
x_98 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_98, 0, x_97);
x_99 = l_Lean_MessageData_ofFormat(x_98);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_9);
lean_ctor_set(x_100, 1, x_99);
x_101 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_101, 0, x_100);
lean_ctor_set(x_101, 1, x_96);
return x_101;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
lean_inc(x_3);
lean_inc(x_1);
x_9 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go___lambda__1___boxed), 5, 2);
lean_closure_set(x_9, 0, x_1);
lean_closure_set(x_9, 1, x_3);
lean_inc(x_2);
x_10 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go___lambda__2___boxed), 8, 5);
lean_closure_set(x_10, 0, x_1);
lean_closure_set(x_10, 1, x_3);
lean_closure_set(x_10, 2, x_2);
lean_closure_set(x_10, 3, x_4);
lean_closure_set(x_10, 4, x_5);
lean_inc(x_9);
x_11 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg), 5, 2);
lean_closure_set(x_11, 0, x_9);
lean_closure_set(x_11, 1, x_10);
x_12 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withTimeoutCheck___rarg(x_2, x_9, x_11, x_6, x_7, x_8);
lean_dec(x_2);
return x_12;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go___lambda__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go___lambda__1(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go___lambda__2___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go___lambda__2(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
return x_9;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_runInterruptible___closed__1() {
_start:
{
uint8_t x_1; uint8_t x_2; lean_object* x_3; 
x_1 = 2;
x_2 = 0;
x_3 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, 1, x_2);
lean_ctor_set_uint8(x_3, 2, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_7 = lean_ctor_get(x_2, 0);
lean_dec(x_7);
x_8 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible___closed__1;
lean_ctor_set(x_2, 0, x_8);
x_9 = lean_ctor_get(x_3, 5);
lean_inc(x_9);
x_10 = lean_io_process_spawn(x_2, x_5);
if (lean_obj_tag(x_10) == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec(x_9);
x_11 = lean_ctor_get(x_10, 0);
lean_inc(x_11);
x_12 = lean_ctor_get(x_10, 1);
lean_inc(x_12);
lean_dec(x_10);
x_13 = lean_ctor_get(x_11, 1);
lean_inc(x_13);
x_14 = lean_alloc_closure((void*)(l_IO_FS_Handle_readToEnd___boxed), 2, 1);
lean_closure_set(x_14, 0, x_13);
x_15 = lean_alloc_closure((void*)(l_EIO_toBaseIO___rarg), 2, 1);
lean_closure_set(x_15, 0, x_14);
x_16 = l_Task_Priority_dedicated;
x_17 = lean_io_as_task(x_15, x_16, x_12);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = lean_ctor_get(x_11, 2);
lean_inc(x_20);
x_21 = lean_alloc_closure((void*)(l_IO_FS_Handle_readToEnd___boxed), 2, 1);
lean_closure_set(x_21, 0, x_20);
x_22 = lean_alloc_closure((void*)(l_EIO_toBaseIO___rarg), 2, 1);
lean_closure_set(x_22, 0, x_21);
x_23 = lean_io_as_task(x_22, x_16, x_19);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lean_unsigned_to_nat(1000u);
x_27 = lean_nat_mul(x_1, x_26);
x_28 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go(x_8, x_27, x_11, x_18, x_24, x_3, x_4, x_25);
return x_28;
}
else
{
uint8_t x_29; 
lean_dec(x_4);
lean_dec(x_3);
x_29 = !lean_is_exclusive(x_10);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_30 = lean_ctor_get(x_10, 0);
x_31 = lean_io_error_to_string(x_30);
x_32 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_32, 0, x_31);
x_33 = l_Lean_MessageData_ofFormat(x_32);
x_34 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_34, 0, x_9);
lean_ctor_set(x_34, 1, x_33);
lean_ctor_set(x_10, 0, x_34);
return x_10;
}
else
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_35 = lean_ctor_get(x_10, 0);
x_36 = lean_ctor_get(x_10, 1);
lean_inc(x_36);
lean_inc(x_35);
lean_dec(x_10);
x_37 = lean_io_error_to_string(x_35);
x_38 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_38, 0, x_37);
x_39 = l_Lean_MessageData_ofFormat(x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_9);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_41, 0, x_40);
lean_ctor_set(x_41, 1, x_36);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_42 = lean_ctor_get(x_2, 1);
x_43 = lean_ctor_get(x_2, 2);
x_44 = lean_ctor_get(x_2, 3);
x_45 = lean_ctor_get(x_2, 4);
x_46 = lean_ctor_get_uint8(x_2, sizeof(void*)*5);
lean_inc(x_45);
lean_inc(x_44);
lean_inc(x_43);
lean_inc(x_42);
lean_dec(x_2);
x_47 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible___closed__1;
x_48 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_48, 0, x_47);
lean_ctor_set(x_48, 1, x_42);
lean_ctor_set(x_48, 2, x_43);
lean_ctor_set(x_48, 3, x_44);
lean_ctor_set(x_48, 4, x_45);
lean_ctor_set_uint8(x_48, sizeof(void*)*5, x_46);
x_49 = lean_ctor_get(x_3, 5);
lean_inc(x_49);
x_50 = lean_io_process_spawn(x_48, x_5);
if (lean_obj_tag(x_50) == 0)
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_49);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
lean_dec(x_50);
x_53 = lean_ctor_get(x_51, 1);
lean_inc(x_53);
x_54 = lean_alloc_closure((void*)(l_IO_FS_Handle_readToEnd___boxed), 2, 1);
lean_closure_set(x_54, 0, x_53);
x_55 = lean_alloc_closure((void*)(l_EIO_toBaseIO___rarg), 2, 1);
lean_closure_set(x_55, 0, x_54);
x_56 = l_Task_Priority_dedicated;
x_57 = lean_io_as_task(x_55, x_56, x_52);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_ctor_get(x_51, 2);
lean_inc(x_60);
x_61 = lean_alloc_closure((void*)(l_IO_FS_Handle_readToEnd___boxed), 2, 1);
lean_closure_set(x_61, 0, x_60);
x_62 = lean_alloc_closure((void*)(l_EIO_toBaseIO___rarg), 2, 1);
lean_closure_set(x_62, 0, x_61);
x_63 = lean_io_as_task(x_62, x_56, x_59);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lean_unsigned_to_nat(1000u);
x_67 = lean_nat_mul(x_1, x_66);
x_68 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_go(x_47, x_67, x_51, x_58, x_64, x_3, x_4, x_65);
return x_68;
}
else
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
lean_dec(x_4);
lean_dec(x_3);
x_69 = lean_ctor_get(x_50, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_50, 1);
lean_inc(x_70);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_71 = x_50;
} else {
 lean_dec_ref(x_50);
 x_71 = lean_box(0);
}
x_72 = lean_io_error_to_string(x_69);
x_73 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_73, 0, x_72);
x_74 = l_Lean_MessageData_ofFormat(x_73);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_49);
lean_ctor_set(x_75, 1, x_74);
if (lean_is_scalar(x_71)) {
 x_76 = lean_alloc_ctor(1, 2, 0);
} else {
 x_76 = x_71;
}
lean_ctor_set(x_76, 0, x_75);
lean_ctor_set(x_76, 1, x_70);
return x_76;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_runInterruptible___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 5);
x_6 = l_Lean_addMessageContextPartial___at_Lean_Core_instAddMessageContextCoreM___spec__1(x_1, x_2, x_3, x_4);
x_7 = !lean_is_exclusive(x_6);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_5);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_5);
lean_ctor_set(x_9, 1, x_8);
lean_ctor_set_tag(x_6, 1);
lean_ctor_set(x_6, 0, x_9);
return x_6;
}
else
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_10 = lean_ctor_get(x_6, 0);
x_11 = lean_ctor_get(x_6, 1);
lean_inc(x_11);
lean_inc(x_10);
lean_dec(x_6);
lean_inc(x_5);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_10);
x_13 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_13, 0, x_12);
lean_ctor_set(x_13, 1, x_11);
return x_13;
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(7u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__2() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--lrat", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__3() {
_start:
{
uint8_t x_1; uint8_t x_2; lean_object* x_3; 
x_1 = 0;
x_2 = 2;
x_3 = lean_alloc_ctor(0, 0, 3);
lean_ctor_set_uint8(x_3, 0, x_1);
lean_ctor_set_uint8(x_3, 1, x_1);
lean_ctor_set_uint8(x_3, 2, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__4() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--binary=", 9, 9);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__5() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("", 0, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__6() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--quiet", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__7() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--unsat", 7, 7);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__8() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("--shrink=0", 10, 10);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__9() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("s UNSATISFIABLE", 15, 15);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__10() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("The external prover produced unexpected output, stdout:\n", 56, 56);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__11() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("stderr:\n", 8, 8);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__12() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parse), 1, 0);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__13() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Error ", 6, 6);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__14() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked(" while parsing:\n", 16, 16);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__15() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("Failed to execute external prover:\n", 35, 35);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__16() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("The SAT solver timed out while solving the problem.", 51, 51);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__17() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("\nConsider increasing the timeout with `set_option sat.timeout <sec>`", 68, 68);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__18() {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__16;
x_2 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__17;
x_3 = lean_string_append(x_1, x_2);
return x_3;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__19() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__18;
x_2 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__20() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__19;
x_2 = l_Lean_MessageData_ofFormat(x_1);
return x_2;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__21() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("false", 5, 5);
return x_1;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__22() {
_start:
{
lean_object* x_1; 
x_1 = lean_mk_string_unchecked("true", 4, 4);
return x_1;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint8_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__1;
x_10 = lean_array_push(x_9, x_2);
x_11 = lean_array_push(x_10, x_3);
x_12 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__2;
x_13 = lean_array_push(x_11, x_12);
x_14 = lean_box(0);
if (x_5 == 0)
{
lean_object* x_186; 
x_186 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__21;
x_15 = x_186;
goto block_185;
}
else
{
lean_object* x_187; 
x_187 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__22;
x_15 = x_187;
goto block_185;
}
block_185:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; lean_object* x_30; lean_object* x_31; 
x_16 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__4;
x_17 = lean_string_append(x_16, x_15);
lean_dec(x_15);
x_18 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__5;
x_19 = lean_string_append(x_17, x_18);
x_20 = lean_array_push(x_13, x_19);
x_21 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__6;
x_22 = lean_array_push(x_20, x_21);
x_23 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__7;
x_24 = lean_array_push(x_22, x_23);
x_25 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__8;
x_26 = lean_array_push(x_24, x_25);
x_27 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__3;
x_28 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6;
x_29 = 0;
x_30 = lean_alloc_ctor(0, 5, 1);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_1);
lean_ctor_set(x_30, 2, x_26);
lean_ctor_set(x_30, 3, x_14);
lean_ctor_set(x_30, 4, x_28);
lean_ctor_set_uint8(x_30, sizeof(void*)*5, x_29);
lean_inc(x_7);
lean_inc(x_6);
x_31 = l_Lean_Elab_Tactic_BVDecide_External_runInterruptible(x_4, x_30, x_6, x_7, x_8);
if (lean_obj_tag(x_31) == 0)
{
lean_object* x_32; 
x_32 = lean_ctor_get(x_31, 0);
lean_inc(x_32);
if (lean_obj_tag(x_32) == 0)
{
uint8_t x_33; 
x_33 = !lean_is_exclusive(x_32);
if (x_33 == 0)
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_31);
if (x_34 == 0)
{
lean_object* x_35; lean_object* x_36; lean_object* x_37; uint32_t x_38; lean_object* x_39; lean_object* x_40; uint32_t x_41; uint8_t x_42; 
x_35 = lean_ctor_get(x_32, 0);
x_36 = lean_ctor_get(x_31, 1);
x_37 = lean_ctor_get(x_31, 0);
lean_dec(x_37);
x_38 = lean_ctor_get_uint32(x_35, sizeof(void*)*2);
x_39 = lean_ctor_get(x_35, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_35, 1);
lean_inc(x_40);
lean_dec(x_35);
x_41 = 255;
x_42 = lean_uint32_dec_eq(x_38, x_41);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
x_43 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__9;
lean_inc(x_39);
x_44 = l_String_startsWith(x_39, x_43);
if (x_44 == 0)
{
lean_object* x_45; uint8_t x_46; 
x_45 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1;
lean_inc(x_39);
x_46 = l_String_startsWith(x_39, x_45);
if (x_46 == 0)
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_free_object(x_31);
x_47 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__10;
x_48 = lean_string_append(x_47, x_39);
lean_dec(x_39);
x_49 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__11;
x_50 = lean_string_append(x_48, x_49);
x_51 = lean_string_append(x_50, x_40);
lean_dec(x_40);
x_52 = lean_string_append(x_51, x_18);
lean_ctor_set_tag(x_32, 3);
lean_ctor_set(x_32, 0, x_52);
x_53 = l_Lean_MessageData_ofFormat(x_32);
x_54 = l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(x_53, x_6, x_7, x_36);
lean_dec(x_7);
lean_dec(x_6);
return x_54;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
lean_dec(x_40);
lean_free_object(x_32);
x_55 = lean_string_to_utf8(x_39);
x_56 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__12;
x_57 = l_Std_Internal_Parsec_ByteArray_Parser_run___rarg(x_56, x_55);
if (lean_obj_tag(x_57) == 0)
{
uint8_t x_58; 
lean_free_object(x_31);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
x_59 = lean_ctor_get(x_57, 0);
x_60 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__13;
x_61 = lean_string_append(x_60, x_59);
lean_dec(x_59);
x_62 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__14;
x_63 = lean_string_append(x_61, x_62);
x_64 = lean_string_append(x_63, x_39);
lean_dec(x_39);
x_65 = lean_string_append(x_64, x_18);
lean_ctor_set_tag(x_57, 3);
lean_ctor_set(x_57, 0, x_65);
x_66 = l_Lean_MessageData_ofFormat(x_57);
x_67 = l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(x_66, x_6, x_7, x_36);
lean_dec(x_7);
lean_dec(x_6);
return x_67;
}
else
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
x_68 = lean_ctor_get(x_57, 0);
lean_inc(x_68);
lean_dec(x_57);
x_69 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__13;
x_70 = lean_string_append(x_69, x_68);
lean_dec(x_68);
x_71 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__14;
x_72 = lean_string_append(x_70, x_71);
x_73 = lean_string_append(x_72, x_39);
lean_dec(x_39);
x_74 = lean_string_append(x_73, x_18);
x_75 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_75, 0, x_74);
x_76 = l_Lean_MessageData_ofFormat(x_75);
x_77 = l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(x_76, x_6, x_7, x_36);
lean_dec(x_7);
lean_dec(x_6);
return x_77;
}
}
else
{
uint8_t x_78; 
lean_dec(x_39);
lean_dec(x_7);
lean_dec(x_6);
x_78 = !lean_is_exclusive(x_57);
if (x_78 == 0)
{
lean_ctor_set_tag(x_57, 0);
lean_ctor_set(x_31, 0, x_57);
return x_31;
}
else
{
lean_object* x_79; lean_object* x_80; 
x_79 = lean_ctor_get(x_57, 0);
lean_inc(x_79);
lean_dec(x_57);
x_80 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_80, 0, x_79);
lean_ctor_set(x_31, 0, x_80);
return x_31;
}
}
}
}
else
{
lean_object* x_81; 
lean_dec(x_40);
lean_dec(x_39);
lean_free_object(x_32);
lean_dec(x_7);
lean_dec(x_6);
x_81 = lean_box(1);
lean_ctor_set(x_31, 0, x_81);
return x_31;
}
}
else
{
lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
lean_dec(x_39);
lean_free_object(x_31);
x_82 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__15;
x_83 = lean_string_append(x_82, x_40);
lean_dec(x_40);
x_84 = lean_string_append(x_83, x_18);
lean_ctor_set_tag(x_32, 3);
lean_ctor_set(x_32, 0, x_84);
x_85 = l_Lean_MessageData_ofFormat(x_32);
x_86 = l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(x_85, x_6, x_7, x_36);
lean_dec(x_7);
lean_dec(x_6);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; uint32_t x_89; lean_object* x_90; lean_object* x_91; uint32_t x_92; uint8_t x_93; 
x_87 = lean_ctor_get(x_32, 0);
x_88 = lean_ctor_get(x_31, 1);
lean_inc(x_88);
lean_dec(x_31);
x_89 = lean_ctor_get_uint32(x_87, sizeof(void*)*2);
x_90 = lean_ctor_get(x_87, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_87, 1);
lean_inc(x_91);
lean_dec(x_87);
x_92 = 255;
x_93 = lean_uint32_dec_eq(x_89, x_92);
if (x_93 == 0)
{
lean_object* x_94; uint8_t x_95; 
x_94 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__9;
lean_inc(x_90);
x_95 = l_String_startsWith(x_90, x_94);
if (x_95 == 0)
{
lean_object* x_96; uint8_t x_97; 
x_96 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1;
lean_inc(x_90);
x_97 = l_String_startsWith(x_90, x_96);
if (x_97 == 0)
{
lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_98 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__10;
x_99 = lean_string_append(x_98, x_90);
lean_dec(x_90);
x_100 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__11;
x_101 = lean_string_append(x_99, x_100);
x_102 = lean_string_append(x_101, x_91);
lean_dec(x_91);
x_103 = lean_string_append(x_102, x_18);
lean_ctor_set_tag(x_32, 3);
lean_ctor_set(x_32, 0, x_103);
x_104 = l_Lean_MessageData_ofFormat(x_32);
x_105 = l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(x_104, x_6, x_7, x_88);
lean_dec(x_7);
lean_dec(x_6);
return x_105;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec(x_91);
lean_free_object(x_32);
x_106 = lean_string_to_utf8(x_90);
x_107 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__12;
x_108 = l_Std_Internal_Parsec_ByteArray_Parser_run___rarg(x_107, x_106);
if (lean_obj_tag(x_108) == 0)
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_109 = lean_ctor_get(x_108, 0);
lean_inc(x_109);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 x_110 = x_108;
} else {
 lean_dec_ref(x_108);
 x_110 = lean_box(0);
}
x_111 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__13;
x_112 = lean_string_append(x_111, x_109);
lean_dec(x_109);
x_113 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__14;
x_114 = lean_string_append(x_112, x_113);
x_115 = lean_string_append(x_114, x_90);
lean_dec(x_90);
x_116 = lean_string_append(x_115, x_18);
if (lean_is_scalar(x_110)) {
 x_117 = lean_alloc_ctor(3, 1, 0);
} else {
 x_117 = x_110;
 lean_ctor_set_tag(x_117, 3);
}
lean_ctor_set(x_117, 0, x_116);
x_118 = l_Lean_MessageData_ofFormat(x_117);
x_119 = l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(x_118, x_6, x_7, x_88);
lean_dec(x_7);
lean_dec(x_6);
return x_119;
}
else
{
lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec(x_90);
lean_dec(x_7);
lean_dec(x_6);
x_120 = lean_ctor_get(x_108, 0);
lean_inc(x_120);
if (lean_is_exclusive(x_108)) {
 lean_ctor_release(x_108, 0);
 x_121 = x_108;
} else {
 lean_dec_ref(x_108);
 x_121 = lean_box(0);
}
if (lean_is_scalar(x_121)) {
 x_122 = lean_alloc_ctor(0, 1, 0);
} else {
 x_122 = x_121;
 lean_ctor_set_tag(x_122, 0);
}
lean_ctor_set(x_122, 0, x_120);
x_123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_123, 0, x_122);
lean_ctor_set(x_123, 1, x_88);
return x_123;
}
}
}
else
{
lean_object* x_124; lean_object* x_125; 
lean_dec(x_91);
lean_dec(x_90);
lean_free_object(x_32);
lean_dec(x_7);
lean_dec(x_6);
x_124 = lean_box(1);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_124);
lean_ctor_set(x_125, 1, x_88);
return x_125;
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
lean_dec(x_90);
x_126 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__15;
x_127 = lean_string_append(x_126, x_91);
lean_dec(x_91);
x_128 = lean_string_append(x_127, x_18);
lean_ctor_set_tag(x_32, 3);
lean_ctor_set(x_32, 0, x_128);
x_129 = l_Lean_MessageData_ofFormat(x_32);
x_130 = l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(x_129, x_6, x_7, x_88);
lean_dec(x_7);
lean_dec(x_6);
return x_130;
}
}
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; uint32_t x_134; lean_object* x_135; lean_object* x_136; uint32_t x_137; uint8_t x_138; 
x_131 = lean_ctor_get(x_32, 0);
lean_inc(x_131);
lean_dec(x_32);
x_132 = lean_ctor_get(x_31, 1);
lean_inc(x_132);
if (lean_is_exclusive(x_31)) {
 lean_ctor_release(x_31, 0);
 lean_ctor_release(x_31, 1);
 x_133 = x_31;
} else {
 lean_dec_ref(x_31);
 x_133 = lean_box(0);
}
x_134 = lean_ctor_get_uint32(x_131, sizeof(void*)*2);
x_135 = lean_ctor_get(x_131, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_131, 1);
lean_inc(x_136);
lean_dec(x_131);
x_137 = 255;
x_138 = lean_uint32_dec_eq(x_134, x_137);
if (x_138 == 0)
{
lean_object* x_139; uint8_t x_140; 
x_139 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__9;
lean_inc(x_135);
x_140 = l_String_startsWith(x_135, x_139);
if (x_140 == 0)
{
lean_object* x_141; uint8_t x_142; 
x_141 = l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1;
lean_inc(x_135);
x_142 = l_String_startsWith(x_135, x_141);
if (x_142 == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; 
lean_dec(x_133);
x_143 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__10;
x_144 = lean_string_append(x_143, x_135);
lean_dec(x_135);
x_145 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__11;
x_146 = lean_string_append(x_144, x_145);
x_147 = lean_string_append(x_146, x_136);
lean_dec(x_136);
x_148 = lean_string_append(x_147, x_18);
x_149 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_149, 0, x_148);
x_150 = l_Lean_MessageData_ofFormat(x_149);
x_151 = l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(x_150, x_6, x_7, x_132);
lean_dec(x_7);
lean_dec(x_6);
return x_151;
}
else
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; 
lean_dec(x_136);
x_152 = lean_string_to_utf8(x_135);
x_153 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__12;
x_154 = l_Std_Internal_Parsec_ByteArray_Parser_run___rarg(x_153, x_152);
if (lean_obj_tag(x_154) == 0)
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
lean_dec(x_133);
x_155 = lean_ctor_get(x_154, 0);
lean_inc(x_155);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 x_156 = x_154;
} else {
 lean_dec_ref(x_154);
 x_156 = lean_box(0);
}
x_157 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__13;
x_158 = lean_string_append(x_157, x_155);
lean_dec(x_155);
x_159 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__14;
x_160 = lean_string_append(x_158, x_159);
x_161 = lean_string_append(x_160, x_135);
lean_dec(x_135);
x_162 = lean_string_append(x_161, x_18);
if (lean_is_scalar(x_156)) {
 x_163 = lean_alloc_ctor(3, 1, 0);
} else {
 x_163 = x_156;
 lean_ctor_set_tag(x_163, 3);
}
lean_ctor_set(x_163, 0, x_162);
x_164 = l_Lean_MessageData_ofFormat(x_163);
x_165 = l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(x_164, x_6, x_7, x_132);
lean_dec(x_7);
lean_dec(x_6);
return x_165;
}
else
{
lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; 
lean_dec(x_135);
lean_dec(x_7);
lean_dec(x_6);
x_166 = lean_ctor_get(x_154, 0);
lean_inc(x_166);
if (lean_is_exclusive(x_154)) {
 lean_ctor_release(x_154, 0);
 x_167 = x_154;
} else {
 lean_dec_ref(x_154);
 x_167 = lean_box(0);
}
if (lean_is_scalar(x_167)) {
 x_168 = lean_alloc_ctor(0, 1, 0);
} else {
 x_168 = x_167;
 lean_ctor_set_tag(x_168, 0);
}
lean_ctor_set(x_168, 0, x_166);
if (lean_is_scalar(x_133)) {
 x_169 = lean_alloc_ctor(0, 2, 0);
} else {
 x_169 = x_133;
}
lean_ctor_set(x_169, 0, x_168);
lean_ctor_set(x_169, 1, x_132);
return x_169;
}
}
}
else
{
lean_object* x_170; lean_object* x_171; 
lean_dec(x_136);
lean_dec(x_135);
lean_dec(x_7);
lean_dec(x_6);
x_170 = lean_box(1);
if (lean_is_scalar(x_133)) {
 x_171 = lean_alloc_ctor(0, 2, 0);
} else {
 x_171 = x_133;
}
lean_ctor_set(x_171, 0, x_170);
lean_ctor_set(x_171, 1, x_132);
return x_171;
}
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec(x_135);
lean_dec(x_133);
x_172 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__15;
x_173 = lean_string_append(x_172, x_136);
lean_dec(x_136);
x_174 = lean_string_append(x_173, x_18);
x_175 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_175, 0, x_174);
x_176 = l_Lean_MessageData_ofFormat(x_175);
x_177 = l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(x_176, x_6, x_7, x_132);
lean_dec(x_7);
lean_dec(x_6);
return x_177;
}
}
}
else
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; 
x_178 = lean_ctor_get(x_31, 1);
lean_inc(x_178);
lean_dec(x_31);
x_179 = l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__20;
x_180 = l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(x_179, x_6, x_7, x_178);
lean_dec(x_7);
lean_dec(x_6);
return x_180;
}
}
else
{
uint8_t x_181; 
lean_dec(x_7);
lean_dec(x_6);
x_181 = !lean_is_exclusive(x_31);
if (x_181 == 0)
{
return x_31;
}
else
{
lean_object* x_182; lean_object* x_183; lean_object* x_184; 
x_182 = lean_ctor_get(x_31, 0);
x_183 = lean_ctor_get(x_31, 1);
lean_inc(x_183);
lean_inc(x_182);
lean_dec(x_31);
x_184 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_184, 0, x_182);
lean_ctor_set(x_184, 1, x_183);
return x_184;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = l_Lean_throwError___at_Lean_Elab_Tactic_BVDecide_External_satQuery___spec__1(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_BVDecide_External_satQuery___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; lean_object* x_10; 
x_9 = lean_unbox(x_5);
lean_dec(x_5);
x_10 = l_Lean_Elab_Tactic_BVDecide_External_satQuery(x_1, x_2, x_3, x_4, x_9, x_6, x_7, x_8);
lean_dec(x_4);
return x_10;
}
}
lean_object* initialize_Std_Tactic_BVDecide_LRAT_Parser(uint8_t builtin, lean_object*);
lean_object* initialize_Lean_CoreM(uint8_t builtin, lean_object*);
lean_object* initialize_Std_Internal_Parsec(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_BVDecide_External(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Std_Tactic_BVDecide_LRAT_Parser(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_CoreM(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Internal_Parsec(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__1 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__1();
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__2 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__2);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__3);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__4 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__4();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__4);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__5);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__6 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__6();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__6);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__7 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__7();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment_wsLit___closed__7);
l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2___closed__1 = _init_l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2___closed__1();
lean_mark_persistent(l_Array_mapMUnsafe_map___at_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___spec__2___closed__1);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__1 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__1();
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__2 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__2);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__3 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__3);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__4);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__5 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__5();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__5);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__6);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__7 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__7();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__7);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__8);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__9 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__9();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__9);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__10 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__10();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__10);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__11 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__11();
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__12 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__12();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__12);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__13 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__13();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__13);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__14 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__14();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__14);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__15 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__15();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parsePartialAssignment___closed__15);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__1);
l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__2 = _init_l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_ModelParser_parseHeader___closed__2);
l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___closed__1 = _init_l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___closed__1);
l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___closed__2 = _init_l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_runInterruptible_withInterruptCheck___rarg___closed__2);
l_Lean_Elab_Tactic_BVDecide_External_runInterruptible___closed__1 = _init_l_Lean_Elab_Tactic_BVDecide_External_runInterruptible___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_runInterruptible___closed__1);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__1 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__1();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__1);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__2 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__2();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__2);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__3 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__3();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__3);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__4 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__4();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__4);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__5 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__5();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__5);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__6 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__6();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__6);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__7 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__7();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__7);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__8 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__8();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__8);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__9 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__9();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__9);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__10 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__10();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__10);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__11 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__11();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__11);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__12 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__12();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__12);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__13 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__13();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__13);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__14 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__14();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__14);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__15 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__15();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__15);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__16 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__16();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__16);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__17 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__17();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__17);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__18 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__18();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__18);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__19 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__19();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__19);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__20 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__20();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__20);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__21 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__21();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__21);
l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__22 = _init_l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__22();
lean_mark_persistent(l_Lean_Elab_Tactic_BVDecide_External_satQuery___closed__22);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
