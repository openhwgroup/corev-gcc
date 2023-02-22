/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcorevsimd1p0 -mabi=ilp32" } */

int foo1 (int a)
{
	return __builtin_riscv_cv_simd_extractu_b(a, -32);
}

int foo2 (int a)
{
	return __builtin_riscv_cv_simd_extractu_b(a, 0);
}

int foo3 (int a)
{
	return __builtin_riscv_cv_simd_extractu_b(a, 31);
}

/* { dg-final { scan-assembler-times "cv\\.extractu\\.b" 3 } } */
