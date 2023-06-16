/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvsimd -mabi=ilp32" } */

int foo1 (int a)
{
	return __builtin_riscv_cv_simd_shuffle_sci_b(a, 0);
}

/* { dg-final { scan-assembler-times "cv\\.shufflei0\\.sci\\.b" 1 } } */
