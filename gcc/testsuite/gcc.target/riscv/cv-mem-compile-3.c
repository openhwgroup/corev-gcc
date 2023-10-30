/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -g -O2 -Wno-int-conversion" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

/* Test for illegal assembly instruction `lbu reg,reg(reg)`.
 */

int a;
int bar (char);

int
foo (void)
{
  short *d;
  char *e = (char *)foo;
  for (;;) {
    char c = d++;
    bar (c);
    short b = e[0] + b;
    if (b)
      a = 5;
    e += 2;
  }
}

/* { dg-final { scan-assembler-not "lbu\t\[a-z\]\[0-99\],\[a-z\]\[0-99\]\\(\[a-z\]\[0-99\]\\)" } } */
