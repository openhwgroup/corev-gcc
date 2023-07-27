/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

int fooHIunsigned (unsigned short int* array_ushort, int n)
{
  int uns_short_sum = 1;

  for(int i=0; i<n; i++)
  {
    uns_short_sum += array_ushort[i];
  }

  return uns_short_sum;
}

/* { dg-final { scan-assembler-times "cv\\.lhu\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),2\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\!\\)" 1 } } */
