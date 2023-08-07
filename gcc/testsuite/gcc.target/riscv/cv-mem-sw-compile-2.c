/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

/*
 * Test for post-inc register-register saves.
 */

int fooSIsigned (signed int* array_int, int n, int j)
{
  int int_sum = 1;

  for(int i=0; i<n; i+=j)
  {
    *array_int += int_sum;
    array_int+=j*sizeof(array_int);
  }

  return int_sum;
}

int fooSIunsigned (unsigned int* array_uint, int n, int j)
{
  int uns_int_sum = 1;

  for(int i=0; i<n; i+=j)
  {
    *array_uint += uns_int_sum;
    array_uint+=j*sizeof(array_uint);
  }

  return uns_int_sum;
}

/* { dg-final { scan-assembler-times "cv\\.sw\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\!\\)" 2 } } */
