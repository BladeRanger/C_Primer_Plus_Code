#include <stdio.h>
int main(void)
{
  int u, t, n, sum;

  printf("Enter lower and upper limits: ");
  scanf("%d%d", &t, &u);

  for(n=t, sum =0; n<=u; n++)
  sum +=n*n;
  printf("The sum of the squares of %d to %d is %d.\n",
  t*t, u*u, sum);
  printf("Enter next set of limits: ");
  scanf("%d%d", &t, &u);
  while(t<u)
  {
    for(n=t, sum =0; n<=u; n++)
    sum += n*n;
      printf("The sum of the squres of %d to %d is %d.\n",
      t*t, u*u, sum);
      printf("Enter next set of limits: ");
      scanf("%d%d", &t, &u);
    }
    printf("Done\n");

    return 0;
  }
