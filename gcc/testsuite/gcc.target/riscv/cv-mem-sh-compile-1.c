/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

int fooHIsigned (signed short int* array_short, int n)
{
  int short_sum = 1;

  for(int i=0; i<n; i++)
  {
    array_short[i] += short_sum;
  }

  return short_sum;
}

int fooHIunsigned (unsigned short int* array_ushort, int n)
{
  int uns_short_sum = 1;

  for(int i=0; i<n; i++)
  {
    array_ushort[i] += uns_short_sum;
  }

  return uns_short_sum;
}

/* { dg-final { scan-assembler-times "cv\\.sh\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\),2" 2 } } */
