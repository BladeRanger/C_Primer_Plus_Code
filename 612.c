#include <stdio.h>
void calc(int x);
int main(void)
{
  int n;

  printf("Enter how many terms do you want to calculate: ");
  scanf("%d", &n);

  while(n>0)
  {
    calc(n);
    printf("Enter how many terms do you want to calculate: ");
    scanf("%d", &n);
  }
  printf("Done\n");

  return 0;
}

void calc(int x)
{
  float sum1 = 1.0;
  float sum2 = 1.0;

  int p, q;

  int sign;

  for(p=1; p<x; p++)
  {
    sum1 += 1.0 / (p+1);

    for(q=p, sign=1; q>0; q--)
      sign *= (-1);

    sum2 += 1.0 / (p+1) * sign;
  }

    printf("sum1 = %.6f\nsum2 = %.6f\n",  sum1, sum2);
}
