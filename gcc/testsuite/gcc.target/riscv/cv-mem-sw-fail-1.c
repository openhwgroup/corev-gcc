/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32" } */
/* { dg-skip-if "" { *-*-* }  { "-O0 -O3" } { "" } } */

/* Tests that sw can generate reg:imm stores */

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
