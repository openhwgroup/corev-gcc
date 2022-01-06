/* { dg-do compile } */
/* { dg-options "-march=rv32g_zca_zcmp -mabi=ilp32d -O1" } */

void foo2 (int a, int b);

int foo1(int a, int b)
{ 
    if (b < a)
    {
        foo2(a, b);
        foo1(a, b);
    }
    return 0;
}

/* { dg-final { scan-assembler "cm.push\t{ra,s0-s1},-16" } } */
/* { dg-final { scan-assembler "cm.popretz\t{ra,s0-s1},16" } } */
