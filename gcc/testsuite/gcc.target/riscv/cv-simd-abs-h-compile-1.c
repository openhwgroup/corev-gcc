/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcorevsimd1p0 -mabi=ilp32" } */

int foo1 (int a)
{
	return __builtin_riscv_cv_simd_abs_h(a);
}

/* { dg-final { scan-assembler-times "cv\\.abs\\.h" 1 } } */
