/* { dg-do compile } */
/* { dg-options "-march=rv32i_xcvmem -mabi=ilp32 -fno-unroll-loops" } */
/* { dg-skip-if "" { *-*-* }  { "-O0" } { "" } } */

int fooQIsigned (signed char* array_char, int n)
{
  int char_sum = 1;

  for(int i=0; i<n; i++)
  {
    char_sum += array_char[i];
  }

  return char_sum;
}

/* { dg-final { scan-assembler-times "cv\\.lb\t\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\),1\\(\(\?\:t\[0-6\]\|a\[0-7\]\|s\[1-11\]\)\\!\\)" 1 } } */
