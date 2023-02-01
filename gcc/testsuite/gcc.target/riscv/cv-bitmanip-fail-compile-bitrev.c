/* { dg-do compile } */
/* { dg-require-effective-target cv_bitmanip } */
/* { dg-options "-march=rv32i_xcvbitmanip -mabi=ilp32" } */
/* { dg-skip-if "Skip LTO tests of builtin compilation" { *-*-* } { "-flto" } } */

#include <stdint.h>
#include <stdio.h>

extern uint32_t res1;
extern uint32_t res2;
extern uint32_t res3;
extern uint32_t res4;

uint32_t
foo (void)
{
  res1 = __builtin_riscv_cv_bitmanip_bitrev (648, 0, -1); /* { dg-error "invalid argument to built-in function" "" { target *-*-* } } */
  res2 = __builtin_riscv_cv_bitmanip_bitrev (648, -1, 0); /* { dg-error "invalid argument to built-in function" "" { target *-*-* } } */
  res3 = __builtin_riscv_cv_bitmanip_bitrev (648, 21, 4); /* { dg-error "invalid argument to built-in function" "" { target *-*-* } } */
  res4 = __builtin_riscv_cv_bitmanip_bitrev (648, 32, 2); /* { dg-error "invalid argument to built-in function" "" { target *-*-* } } */

  return res1+res2+res3+res4;
}
