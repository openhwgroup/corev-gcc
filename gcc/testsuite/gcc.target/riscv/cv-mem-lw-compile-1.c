/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

/*
 * Test for post-inc register-immediate loads.
 */

int fooSIsigned (signed int* array_int, int n)
{
  int int_sum = 1;

  for(int i=0; i<n; i++)
  {
    int_sum += array_int[i];
  }

  return int_sum;
}

int fooSIunsigned (unsigned int* array_uint, int n)
{
  int uns_int_sum = 1;

  for(int i=0; i<n; i++)
  {
    uns_int_sum += array_uint[i];
  }

  return uns_int_sum;
}

/* { dg-final { scan-assembler-times "cv\\.lw\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),4\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\!\\)" 2 } } */
