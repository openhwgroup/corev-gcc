/* { dg-do compile } */
/* { dg-options "-march=rv32imc_xcvhwlp -mabi=ilp32 -O2" } */

char *a;
int b, c;

int
foo ()
{
  char e = 0;
  for (; e < 6; e++)
    a[b] |= a[e] |= a[b] |= a[c + e >> 4 * b] |= 80 >> e + 1;
}