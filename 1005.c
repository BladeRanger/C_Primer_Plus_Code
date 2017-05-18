#include <stdio.h>
double diff(double a[], int n);

int main(void)
{
  double test[5] = {22.0, 4.0, 6.0, 8.0, 10.0};
  printf("diff = %.2f\n", diff(test, 5));

  return 0;
}

double diff(double a[], int n)
{
  double max, min;
  int i;

  if(a[0]>a[1])
  {
    max = a[0];
    min = a[1];
  }

  else
  {
    max = a[1];
    min = a[0];
  }

  for(i=2; i<n; i++)
  {
    if (a[i]>max)
      max = a[i];
    else if (a[i]<min)
      min = a[i];
  }
  return max-min;
}
