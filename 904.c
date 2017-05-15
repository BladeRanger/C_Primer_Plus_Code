#include <stdio.h>
double get_num(void);
double h_mean(double a, double b);

int main(void)
{
  double x, y;

  printf("Enter a number:\n");
  x = get_num();

  printf("Enter another number:\n");
  y = get_num();

  printf("The harmonics mean of %.2f and %.2f is %.2f.\n",
  x, y, h_mean(x, y));

  return 0;
}

double get_num(void)
{
  double x;

  while((scanf("%lf", &x)!=1)||(x==0))
  {
    printf("Got to be a non-zero number:\n");
    while(getchar()!='\n')
      continue;
  }
  while(getchar()!='\n')
      continue;
  return x;
}

double h_mean(double a, double b)
{
  return 2/(1/a+1/b);
}
