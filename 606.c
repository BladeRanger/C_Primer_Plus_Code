#include <stdio.h>
int main(void)
{
  int u, t, n;

  printf("Enter the upper limit: ");
  scanf("%d", &u);
  printf("Ente the lower limit: ");
  scanf("%d", &t);

  for(n=t; n<=u; n++)
  printf("%6d %6d %6d\n", n, n*n, n*n*n);

  return 0;
}
