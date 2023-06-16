/* { dg-do compile } */
/* { dg-require-effective-target cv_alu } */
/* { dg-options "-march=rv32i_xcvalu -mabi=ilp32" } */

#include <stdint.h>

int foo1(unsigned int a, unsigned int b)
{
  return __builtin_riscv_cv_alu_sletu (a, b);
}

/* { dg-final { scan-assembler-times "cv\\.sletu" 1 } } */
