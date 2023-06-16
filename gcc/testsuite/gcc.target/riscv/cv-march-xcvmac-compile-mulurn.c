/* { dg-do compile } */
/* { dg-require-effective-target cv_mac } */
/* { dg-options "-march=rv32i_xcvmac -mabi=ilp32" } */

extern int d;
extern int e;
extern int f;

void foo(int a, int b)
{
  d = __builtin_riscv_cv_mac_muluRN (a, b, 0);
  e = __builtin_riscv_cv_mac_muluRN (a, b, 7);
  f = __builtin_riscv_cv_mac_muluRN (a, b, 31);
}

/* { dg-final { scan-assembler-times "cv\.muluRN\t\[a-z\]\[0-9\],\[a-z\]\[0-9\],\[a-z\]\[0-9\],0" 1 } } */
/* { dg-final { scan-assembler-times "cv\.muluRN\t\[a-z\]\[0-9\],\[a-z\]\[0-9\],\[a-z\]\[0-9\],7" 1 } } */
/* { dg-final { scan-assembler-times "cv\.muluRN\t\[a-z\]\[0-9\],\[a-z\]\[0-9\],\[a-z\]\[0-9\],31" 1 } } */
