#include <stdio.h>
void reverse(double * a, int n);

int main(void)
{
  int i;
  double test[5]={2.0,4.0,16.0,8.0,110.0};
  reverse(test,5);
  printf("c1  c2  c3  c4  c5\n");
  for(i=0; i<5; i++)
  printf("%.2f  ", test[i]);
  printf("\n");
  return 0;
}
void reverse(double * a, int n)
{
  double temp[n];
  int i;

  for(i=0; i<n; i++)
  *(temp+n-i-1)=*(a+i);

  for(i=0; i<n; i++)
  *(a+i)=*(temp+i);
}
