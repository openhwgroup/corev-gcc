/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32if_xcvmem" } */

/*
 * Test for illegal XCVmem specific operand in flw.
 * Error: illegal operands `flw fa5,a5(a4)'
 */

int b, e;
float *m;

int
foo (void) {
  m[1] = m[b];
  m[b] = e;

  return 0;
}

/* { dg-final { scan-assembler-not "flw\tfa5,a5\\(a4\\)" } } */
