#include <stdio.h>
void sort(double *a, double *b, double *c);
int main(void)
{
  double x, y, z;
  printf("Enter 3 numbers:\n");

  while(scanf("%lf%lf%lf", &x, &y, &z)!=3)
  {
    printf("Got to be 3 numbers:\n");
    while(getchar()!='\n')
      continue;
  }
  sort(&x, &y, &z);

  printf("x=%.2f\ny=%.2f\nz=%.2f\n", x, y, z);
  return 0;
}

void sort(double *a, double *b, double *c)
{
  double temp;

  if(*a>=*c)
  {
    if(*c>*b)
    {
      temp=*c;
      *c=*b;
      *b=temp;
    }
    else if(*b>*a)
    {
      temp=*a;
      *a=*b;
      *b=temp;
    }
  }

  else
  {
    if (*b>*c)
    {
      temp=*b;
      *b=*c;
      *c=*a;
      *a=temp;
    }
    else if(*b<*a)
    {
      temp=*a;
      *a=*c;
      *c=*b;
      *b=temp;
    }
    else
    {
      temp=*a;
      *a=*c;
      *c=temp;
    }
  }
}
