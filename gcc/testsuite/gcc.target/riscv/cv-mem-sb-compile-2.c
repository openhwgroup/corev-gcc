/* { dg-do compile } */
/* { dg-require-effective-target cv_mem } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops -fno-tree-vectorize" } */
/* { dg-skip-if "" { *-*-* } { "-O0" } } */

/*
 * Test for post-inc register-register saves.
 */

int
fooQIsigned (signed char* array_char, int n, int j)
{
  int char_sum = 1;
  int i = 0;
  int step = j * 2;

  do {
    *array_char += char_sum;
    i += j;
    array_char = (signed char *)((int)array_char + step);
  } while (i < n);

  return char_sum;
}

int
fooQIunsigned (unsigned char* array_uchar, int n, int j)
{
  int uns_char_sum = 1;
  int i = 0;
  int step = j * 2;

  do {
    *array_uchar += uns_char_sum;
    i += j;
    array_uchar = (signed char *)((int)array_uchar + step);
  } while (i < n);

  return uns_char_sum;
}

/* { dg-final { scan-assembler-times "cv\\.sb\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\),\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)" 2 } } */
