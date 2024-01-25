/* { dg-do assemble } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem" } */

/*
 * Test for illegal XCVmem specific operand in sw.
 */

int a;
float *b;

int
foo (void)
{
  int c;
  for (c = 0; c < 10; c++)
    b[c] = a;
}
