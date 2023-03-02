/* { dg-do compile } */
/* { dg-require-effective-target cv_alu } */
/* { dg-options "-march=rv32i_xcvalu1p0 -mabi=ilp32" } */

int foo1 (int a, int b)
{
    return __builtin_riscv_cv_alu_min (a, b);
}

/* { dg-final { scan-assembler-times "cv\\.min" 1 } } */
