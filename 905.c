#include <stdio.h>
double larger_of(double *a, double *b);
int main(void)
{
  double x=40, y=30;

  larger_of(&x, &y);

  printf("x=%.2f\ny=%.2f\n", x, y);

  return 0;
}

double larger_of(double *a, double *b)
{
  return (*a>*b)?(*b=*a):(*a=*b);
}
