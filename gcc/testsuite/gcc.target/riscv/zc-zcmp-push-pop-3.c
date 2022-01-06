/* { dg-do compile } */
/* { dg-options "-march=rv32g_zca_zcmp -mabi=ilp32d -O1" } */

void foo2 (int a, int b, int c, int d);

int foo1(int a, int b, int c, int d)
{ 
    if (b < a)
    {
        foo2(a, b, c, d);
        foo1(a, b, c, d);
    }
    return 0;
}

/* { dg-final { scan-assembler "cm.push\t{ra,s0-s3},-32" } } */
/* { dg-final { scan-assembler "cm.popretz\t{ra,s0-s3},32" } } */
