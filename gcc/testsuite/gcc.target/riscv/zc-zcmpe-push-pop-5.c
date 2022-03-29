/* { dg-do compile } */
/* { dg-options "-march=rv32e_zca_zcmpe -mabi=ilp32e -O1" } */

int foo2 (int, int);

int foo1(int n, int k)
{
  int mat[n + 1][k + 1];
  mat[0][0] = 1;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= foo2(i, k); j++)
      mat[i][j] = j * mat[i - 1][j - 1];
  return mat[n][k];
}

/* { dg-final { scan-assembler "cm.push\t{ra,s0-s1},-64" } } */
/* { dg-final { scan-assembler "cm.popret\t{ra,s0-s1},64" } } */
