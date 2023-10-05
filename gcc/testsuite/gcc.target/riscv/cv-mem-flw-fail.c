/* { dg-do compile } */
/* { dg-options "-march=rv32if_xcvmem" } */

// Error: illegal operands `flw fa5,a5(a4)'

int b, e;
float *m;

int
foo (void) {
  m[1] = m[b];
  m[b] = e;

  return 0;
}

/* { dg-final { scan-assembler-not "flw\tfa5,a5\\(a4\\)" } } */
