/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcorevsimd1p0 -mabi=ilp32" } */

int foo1 (int a, int b)
{
	return __builtin_riscv_cv_simd_cmpgeu_sc_b(a, b);
}

int foo2 (int a)
{
	return __builtin_riscv_cv_simd_cmpgeu_sc_b(a, 0);
}

int foo3 (int a)
{
	return __builtin_riscv_cv_simd_cmpgeu_sc_b(a, 63);
}

/* { dg-final { scan-assembler-times "cv\\.cmpgeu\\.sc\\.b" 1 } } */
/* { dg-final { scan-assembler-times "cv\\.cmpgeu\\.sci\\.b" 2 } } */
