/* { dg-do compile } */
/* { dg-options "-march=rv32g_zca_zcmp -mabi=ilp32d -O0" } */

#include <stdio.h>

void __attribute__ ((interrupt ("user")))
foo (void)
{
  char buf[560] = {0};
  printf("%d", buf[1]);
}

/* { dg-final { scan-assembler "cm.pop\t{ra,s0},64" } } */
