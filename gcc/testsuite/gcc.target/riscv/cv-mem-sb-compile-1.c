/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops -fno-tree-vectorize" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

int fooQIsigned (signed char* array_char, int n)
{
  int char_sum = 1;

  for(int i=0; i<n; i++)
  {
    array_char[i] += char_sum;
  }

  return char_sum;
}

int fooQIunsigned (unsigned char* array_uchar, int n)
{
  int uns_char_sum = 1;

  for(int i=0; i<n; i++)
  {
    array_uchar[i] += uns_char_sum;
  }

  return uns_char_sum;
}

/* { dg-final { scan-assembler-times "cv\\.sb\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\),1" 2 } } */
