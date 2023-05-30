/* { dg-do compile } */
/* { dg-options "-02 -march=rv32im_xcvmac1p0 -mabi=ilp32" } */

int foo(int a, int b, int c)
{
    return a - b * c;
}

/* { dg-final { scan-assembler-times "cv\\.msu" 1 } } */

