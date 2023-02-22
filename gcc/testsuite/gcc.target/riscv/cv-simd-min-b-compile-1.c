/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcorevsimd1p0 -mabi=ilp32" } */

int foo1 (int a, int b)
{
	return __builtin_riscv_cv_simd_min_b(a, b);
}

/* { dg-final { scan-assembler-times "cv\\.min\\.b" 1 } } */
