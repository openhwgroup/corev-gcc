/* This testcase is to test whether push/pop can correctly split stack adjustment offset. */
/* { dg-do compile } */
/* { dg-options "-march=rv32e_zcmp -mabi=ilp32e -O0" } */

void test (char *);

int foo()
{
  char m[512] = {0};
  test (m);
}

/* { dg-final { scan-assembler "cm.push\t{ra,s0},-64" } } */
/* { dg-final { scan-assembler "addi\tsp,sp,-460" } } */
/* { dg-final { scan-assembler "addi\tsp,sp,460" } } */
/* { dg-final { scan-assembler "cm.popret\t{ra,s0},64" } } */
