/* { dg-do compile } */
/* { dg-require-effective-target cv_alu } */
/* { dg-options "-march=rv32i_xcvalu1p0 -mabi=ilp32" } */

#include <stdint.h>

extern int d;

void foo1(int a, int b, int c)
{
  d = __builtin_riscv_cv_alu_addN (a, b, c);
}

/* { dg-final { scan-assembler-times "cv\\.addNr" 1 } } */
