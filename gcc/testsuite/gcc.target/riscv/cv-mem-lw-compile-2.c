/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* } { "-O0" } } */

/*
 * Test for post-inc register-register loads.
 */

int
fooSIsigned (signed int* array_int, int j)
{
  int int_sum = 1;
  int i = 0;
  int step = j * 2;

  do {
    int_sum += *array_int;
    i += j;
    array_int = (signed int *)((int)array_int + step);
  } while (i < 200);

  return int_sum;
}

int
fooSIunsigned (unsigned int* array_uint, int j)
{
  int uns_int_sum = 1;
  int i = 0;
  int step = j * 2;

  do {
    uns_int_sum += *array_uint;
    i += j;
    array_uint = (unsigned int *)((int)array_uint + step);
  } while (i < 200);

  return uns_int_sum;
}

/* { dg-final { scan-assembler-times "cv\\.lw\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)" 2 } } */
