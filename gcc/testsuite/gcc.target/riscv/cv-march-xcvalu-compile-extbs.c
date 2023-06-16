/* { dg-do compile } */
/* { dg-require-effective-target cv_alu } */
/* { dg-options "-march=rv32i_xcvalu -mabi=ilp32" } */

#include <stdint.h>

int foo1(int a)
{
  return __builtin_riscv_cv_alu_extbs (a);
}

/* { dg-final { scan-assembler-times "cv\\.extbs" 1 } } */
