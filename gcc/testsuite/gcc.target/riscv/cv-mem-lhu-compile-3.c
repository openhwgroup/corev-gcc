/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

int fooHIunsigned (unsigned short int* array_ushort, int i, int j)
{
  return array_ushort[i+j];
}

/* { dg-final { scan-assembler-times "cv\\.lhu\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\)" 1 } } */
