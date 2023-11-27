/* { dg-do compile } */
/* { dg-options "-march=rv32imc_xcvhwlp -mabi=ilp32 -O2" } */

int *c;
int d[12];
int e;
int b ();

int
bar ()
{
  volatile int a = b ();
}

int
foo ()
{
  short g, h;
  for (; e;)
    {
      g = 0;
      for (; g < 8; g++)
	{
	  h = 0;
	  for (; h < 4; h++)
	    d[h] = c[h] = d[0];
	}
    }
}

int
b ()
{
  return foo();
}