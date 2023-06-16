/* { dg-do compile } */
/* { dg-options "-O2 -march=rv32im_xcvmac -mabi=ilp32" } */

int foo(int a, int b, int c)
{
    return a * b + c;
}

/* { dg-final { scan-assembler-times "cv\\.mac" 1 } } */

