/* { dg-do assemble } */
/* { dg-options "-march=rv32i_xcvmem" } */

int a;
float *b;

int
foo (void)
{
  int c;
  for (c = 0; c < 10; c++)
    b[c] = a;
}
