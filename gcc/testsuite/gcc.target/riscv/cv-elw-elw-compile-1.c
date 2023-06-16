/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvelw -mabi=ilp32" } */

int foo1(int* b)
{
    return __builtin_riscv_cv_elw_elw(b+8);
}

/* { dg-final { scan-assembler-times "cv\\.elw" 1 } } */
