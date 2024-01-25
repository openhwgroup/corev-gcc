/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* } { "-O0" "-Og" } } */

/*
 * Test for post-inc register-register loads.
 */

int
fooSIsigned (signed int* array_int, int j)
{
  int int_sum = 1;

  for (int i = 0; i < 200; i += j)
  {
    int_sum += *array_int;
    array_int += j * sizeof (array_int);
  }

  return int_sum;
}

int
fooSIunsigned (unsigned int* array_uint, int j)
{
  int uns_int_sum = 1;

  for (int i = 0; i < 200; i += j)
  {
    uns_int_sum += *array_uint;
    array_uint += j * sizeof (array_uint);
  }

  return uns_int_sum;
}

/* { dg-final { scan-assembler-times "cv\\.lw\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)" 2 } } */
