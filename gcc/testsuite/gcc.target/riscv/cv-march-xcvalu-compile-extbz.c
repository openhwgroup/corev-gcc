/* { dg-do compile } */
/* { dg-require-effective-target cv_alu } */
/* { dg-options "-march=rv32i_xcvalu -mabi=ilp32" } */

#include <stdint.h>

int foo1(int a)
{
  return __builtin_riscv_cv_alu_extbz (a);
}

/* { dg-final { scan-assembler-times "cv\\.extbz" 1 } } */
