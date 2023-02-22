/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcorevsimd1p0 -mabi=ilp32" } */

int foo1 (int a, int b)
{
	return __builtin_riscv_cv_simd_avgu_h(a, b);
}

/* { dg-final { scan-assembler-times "cv\\.avgu\\.h" 1 } } */
