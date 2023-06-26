/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvelw1p0 -mabi=ilp32" } */

int foo1(void* b)
{
    return __builtin_riscv_cv_elw_elw(b+8);
}

/* { dg-final { scan-assembler-times "cv\\.elw" 1 } } */
