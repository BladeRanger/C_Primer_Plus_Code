#include <stdio.h>
_Bool prime(int n);
int main(void)
{
  int m, n;
  printf("Enter an integer that >1 (0 to quit):\n");

  while((scanf("%d",&m) == 1) && (m>1))
  {
    for(n=2; n<=m; n++)
    {
      if(prime(n))
      printf("%6d is a prime number and is <=%6d.\n", n , m);
    }

    printf("Enter another integer that > 1 (0 to quit):\n");
  }

  return 0;
}

_Bool prime(int n)
{
  int a;
  _Bool prime = 1;

  for(a=2; a<n; a++)
  {
    if(n%a == 0)
    prime = 0;
  }

  return prime;
}
