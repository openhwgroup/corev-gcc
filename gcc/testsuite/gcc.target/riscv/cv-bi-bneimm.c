/* Test for COREV branching immediate bne BI extensions */
/* { dg-do run { target { riscv32-corev-elf } } } */
/* { dg-options "-march=rv32i_xcorevbi1p0 -std=gnu11" } */
/* { dg-timeout 5 { target { riscv-corev-elf } } } */

/* This test checks the cv.benimm instruction functional behaviour.
 * It uses an 5-bit signed immediate instead of a register as
 * condition parameter, saving one register.
 */

#include <stdlib.h>
/* Avoid loop unrolling */
#define ARRAY_DIM (20)
/* Boundaries for signed 5-bit immediate */
#define LOWER_BOUND (-16)
#define UPPER_BOUND (+15)

int array1[ARRAY_DIM];
int array2[ARRAY_DIM];

/* Initialization useful for testing purposes */
void array_init(void)
{
  for(int i=0; i<ARRAY_DIM; i++)
  {
    array1[i] = sizeof(signed int);
    array2[i] = sizeof(unsigned int);
  }
}

/* The compiler tends to switch from EQ to NE for a reason of cost */
void bneimm()
{
  /* Set specific entries of the arrays when the conditions are satisfied */
  for(int i=0; i<ARRAY_DIM; i++)
  {
    if(i == UPPER_BOUND) array1[i] = i;
  }

  for(int i=0; i>-ARRAY_DIM; i--)
  {
    if(i == LOWER_BOUND) array2[-i] = i;
  }
}

int main(void)
{
  array_init();
  
  bneimm();

  for(int i=0; i<ARRAY_DIM; i++)
  {
    if(i == UPPER_BOUND)
    {
      if(array1[i] != i) abort();
    }
    else
    {
      if(array1[i] != sizeof(signed int)) abort();
    }
  }

  for(int i=0; i<ARRAY_DIM; i++)
  {
    if(i == -LOWER_BOUND)
    {
      if(array2[i] != -i) abort();
    }
    else
    {
      if(array2[i] != sizeof(unsigned int)) abort();
    }
  }

  return 0;
}
