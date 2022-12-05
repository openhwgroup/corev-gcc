/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcorevelw1p0 -mabi=ilp32" } */

int var;

int foo1(void* b)
{
    return __builtin_riscv_cv_elw(b+8);
}

/* { dg-final { scan-assembler-times "cv\\.elw" 1 } } */