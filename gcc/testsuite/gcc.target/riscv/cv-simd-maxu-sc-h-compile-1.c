/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcorevsimd1p0 -mabi=ilp32" } */

int foo1 (int a, int b)
{
	return __builtin_riscv_cv_simd_maxu_sc_h(a, b);
}

int foo2 (int a)
{
	return __builtin_riscv_cv_simd_maxu_sc_h(a, 0);
}

int foo3 (int a)
{
	return __builtin_riscv_cv_simd_maxu_sc_h(a, 63);
}

/* { dg-final { scan-assembler-times "cv\\.maxu\\.sc\\.h" 1 } } */
/* { dg-final { scan-assembler-times "cv\\.maxu\\.sci\\.h" 2 } } */
