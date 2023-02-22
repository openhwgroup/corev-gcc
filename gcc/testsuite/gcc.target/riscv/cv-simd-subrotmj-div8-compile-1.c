/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvsimd1p0 -mabi=ilp32" } */

int foo1 (int a, int b)
{
	return __builtin_riscv_cv_simd_subrotmj(a, b, 3);
}

/* { dg-final { scan-assembler-times "cv\\.subrotmj\\.div8" 1 } } */
