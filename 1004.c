#include <stdio.h>
int max(double a[], int n);

int main(void)
{
  double test[5]={22.0,4.0,16.0,8.0,10.0};

  printf("Max index = %d\n", max(test, 5));

  return 0;
}

int max(double a[], int n)
{
  int i;
  int index=0;
  double m;

  for(m=a[0], i=0; i<n; i++)
  {
    if(a[i]>m)
    {
      m=a[i];
      index = i;
    }
  }
  return index;
}
