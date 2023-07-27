/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -g -O2" } */

/*
 * Test for illegal XCVmem specific operand.
 * Pattern: `(mem:DF (plus:SI (reg reg)))`.
 */

struct {
  double a[3];
} * b;
int c;

int
foo (void)
{
  b[0].a[c] -= b[0].a[c];
}
