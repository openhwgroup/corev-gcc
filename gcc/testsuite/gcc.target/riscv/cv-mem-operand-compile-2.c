/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -g -O2" } */

/*
 * Test for illegal XCVmem specific operand.
 * Pattern: `(mem:DF (post_modify:SI (reg reg)))`.
 */

int bar (double);

int
foo (void)
{
  double *b;
  int c = 0;
  for (;; c++)
    bar (b[c]);
}

