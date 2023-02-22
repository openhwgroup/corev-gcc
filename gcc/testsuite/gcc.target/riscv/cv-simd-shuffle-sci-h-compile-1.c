/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcorevsimd1p0 -mabi=ilp32" } */

int foo1 (int a)
{
	return __builtin_riscv_cv_simd_shuffle_sci_h(a, 0);
}

/* { dg-final { scan-assembler-times "cv\\.shuffle\\.sci\\.h" 1 } } */
