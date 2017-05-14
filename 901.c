#include <stdio.h>

double min(double x, double y);

int main(void)
{
  double a, b;

  printf("Enter 2 numbers:\n");
  while (scanf("%lf %lf", &a, &b) != 2)
  {
    printf("Need two numbers:\n");
    while(getchar()!='\n')
      continue;
  }

  printf("The minimum of the two numbers is %.2f.\n", min(a, b));

  return 0;
}

double min(double x, double y)
{
  return (x>y) ? y : x;
}
