#include <stdio.h>
double cube(double x);
int main(void)
{
  double num;

  printf("Enter a number to be cubed:\n");
  scanf("%lf", &num);
  printf("The cube of %.2f is %.4f.\n",
  num, cube(num));

  return 0;
}

double cube(double x)
{
  return x * x * x;
}
