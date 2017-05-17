#include <stdio.h>
int max(int a[], int n);

int main(void)
{
  int test[5]={2,4,16,8,10};

  printf("Max = %d\n", max(test, 5));

  return 0;
}

int max(int a[], int n)
{
  int i, m;

  for(m=a[0], i=0; i<n; i++)
  {
    if(a[i]>m)
    m=a[i];
  }
  return m;
}
