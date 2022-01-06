/* { dg-do compile } */
/* { dg-options "-march=rv32g_zca_zcmp -mabi=ilp32d -O1" } */

void foo2 (int a, int b, int c, int d, int e);

int foo1(int a, int b, int c, int d, int e)
{
    if (b < a)
    {
        foo2(a, b, c, d, e);
        foo1(a, b, c, d, e);
    }
    return -1;
}

/* { dg-final { scan-assembler "cm.push\t{ra,s0-s4},-32" } } */
/* { dg-final { scan-assembler "cm.popret\t{ra,s0-s4},32" } } */
