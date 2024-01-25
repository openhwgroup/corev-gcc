/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32ic_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* We don't generate for some optimization levels. TODO: should support for Og. */
/* { dg-skip-if "" { *-*-* } { "-O0" "-Og" } } */

/*
 * Test for post-inc register-immediate loads.
 */

int
fooSIsigned (signed int* array_int)
{
  int int_sum = 1;

  for (int i = 0; i < 200; i++)
    int_sum += array_int [i];

  return int_sum;
}

int
fooSIunsigned (unsigned int* array_uint)
{
  int uns_int_sum = 1;

  for (int i = 0; i < 200; i++)
    uns_int_sum += array_uint [i];

  return uns_int_sum;
}

/* { dg-final { scan-assembler-times "cv\\.lw\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\),4" 2 } } */
