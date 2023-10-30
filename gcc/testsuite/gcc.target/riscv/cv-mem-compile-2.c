/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -g -O2" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

/* Test for illegal pattern: `(mem:DF (post_modify:SI (reg reg)))`.
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

