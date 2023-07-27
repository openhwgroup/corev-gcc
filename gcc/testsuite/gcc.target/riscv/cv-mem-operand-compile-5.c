/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32" } */

/*
 * Tests that stores can generate regular reg:imm operands.
 */

int a[1];
int b, c, d, e, f;
float g;

int
foo (void)
{
  int h;
  for (;; d++)
    switch (c) {
    case 8:
      g = e == f;
      a[h + d] = g;
      g = e < f;
      b = g;
    }
}
