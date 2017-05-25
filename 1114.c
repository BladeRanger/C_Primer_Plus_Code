#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  double result = 1;
  double f = atof(argv[1]);
  int n = atoi(argv[2]);

  if(f==0)
  {
    if(n==0)
      printf("0 to the power of 0 is not defined. Use 1.\n");
    else
      result = 0;
  }

  else if (n==0)
    result = 1;

  else
  {
    for(int i=0; i<n; i++)
      result *= f;
  }
  printf("%.2lf ^ %d = %.4lf\n", f, n, result);

  return 0;
}
