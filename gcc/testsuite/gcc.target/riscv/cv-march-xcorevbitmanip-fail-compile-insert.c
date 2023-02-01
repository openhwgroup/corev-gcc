/* { dg-do compile } */
/* { dg-require-effective-target cv_bitmanip } */
/* { dg-options "-march=rv32i_xcvbitmanip -mabi=ilp32" } */
/* { dg-skip-if "Skip LTO tests of builtin compilation" { *-*-* } { "-flto" } } */

#include <stdint.h>
#include <stdio.h>

extern uint32_t res1, res2, res3, res4, res5, res6;

uint32_t
foo (void)
{
  res1 = __builtin_riscv_cv_bitmanip_insert (648, -1, 645);
  res2 = __builtin_riscv_cv_bitmanip_insert (648, 1, 645);
  res3 = __builtin_riscv_cv_bitmanip_insert (648, 200, 645);
  res4 = __builtin_riscv_cv_bitmanip_insert (1648, 1023, 1645); /* { dg-error "invalid argument to built-in function" } */
  res5 = __builtin_riscv_cv_bitmanip_insert (1648, 1024, 1645);
  res6 =  __builtin_riscv_cv_bitmanip_insert (1648, 65536, 1645); /* { dg-warning "unsigned conversion from \'int\' to \'short unsigned int\' changes value from \'65536\' to \'0\'" } */

  return res1 + res2 + res3 + res4 + res5 + res6;
}
