#include <stdio.h>
int main(void)
{
  float r1=0.1, r2=0.05;
  int n=1, m;
  float sum1=100, sum2=100;

  do
  {
    sum1 += 100*r1;
    sum2 *= (1+r2);

    n++;

    printf("%.2f    %.2f    %.2f\n", sum1, sum2, sum1 - sum2);
  }
  while(sum1 > sum2);

  printf("It will take %d years. %.2f < %.2f.\n",
  n-1, sum1, sum2);

  return 0;
}
