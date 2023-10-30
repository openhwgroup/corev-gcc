/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -g -O2" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

/* Test for illegal generation of pattern: `(mem:DF (plus:SI (reg reg)))`.
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
