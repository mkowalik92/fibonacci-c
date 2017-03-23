#include <stdio.h>
#include <stdlib.h>

int f1 = 0;
int f2 = 1;
int fn;

void printProgGreet(),fibonacci();

int main( int argc, char **argv )
{
  if ( argc < 2 )
    {
      printf("Error: Argument Required: INTEGER VALUE\n");
      return 0;
    }
  else if ( argc > 2 )
    {
      printf("Error: Too Many Arguments\n");
      return 0;
    }
  else
    {
      fn = atoi(argv[1]);
      if ( fn == 1 )
	{
	  printProgGreet();
	  printf("f1: %d\n",f1);
	}
      else if ( fn == 2 )
	{
	  printProgGreet();
	  printf("f1: %d\n  f2: %d\n",f1,f2);
	}
      else if ( fn == 0 )
	{
	  printf("Error: Please use interget value greater than zero.\n");
	  return 0;
	}
      else
	{
	  printProgGreet();
	  printf("f1: %d\n  f2: %d\n",f1,f2);
	  fibonacci();
	  return 0;
	}
    }
}

void printProgGreet()
{
  printf("\n          Fibonacci          \n\n     Seed1: %d | Seed2: %d     \n\n  ",f1,f2);
}

void fibonacci()
{
  int i;
  long long int nextNum;
  long long int prevNum;
  long long int tempNum;
  nextNum=f2;
  prevNum=f1;
  for ( i=3; i<=fn; i++ )
    {
      tempNum=nextNum;
      nextNum+=prevNum;
      prevNum=tempNum;
      printf("  f%d: %lli\n",i,nextNum);
    }
}
