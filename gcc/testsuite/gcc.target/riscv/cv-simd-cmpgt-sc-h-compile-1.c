/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcorevsimd1p0 -mabi=ilp32" } */

int foo1 (int a, int b)
{
	return __builtin_riscv_cv_simd_cmpgt_sc_h(a, b);
}

int foo2 (int a)
{
	return __builtin_riscv_cv_simd_cmpgt_sc_h(a, -32);
}

int foo3 (int a)
{
	return __builtin_riscv_cv_simd_cmpgt_sc_h(a, 0);
}

int foo4 (int a)
{
	return __builtin_riscv_cv_simd_cmpgt_sc_h(a, 31);
}

/* { dg-final { scan-assembler-times "cv\\.cmpgt\\.sc\\.h" 1 } } */
/* { dg-final { scan-assembler-times "cv\\.cmpgt\\.sci\\.h" 3 } } */
