/* { dg-do compile } */
/* { dg-options "-march=rv32im_zcmt -mabi=ilp32" } */

int foo()
{
    asm("cm.jt 0");
}

/* { dg-final { scan-assembler "cm.jt 0" } } */
