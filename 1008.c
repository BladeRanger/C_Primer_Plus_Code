#include <stdio.h>
void copy_ptr(double * t, double * s, int n);
int main(void)
{
  double test[7] = {2.0, 4.0, 6.0, 8.0, 10.0, 12.0, 14.0};
  double target[3];

  copy_ptr(target, test+2, 3);
  printf("%.1f %.1f %.1f\n", target[0], target[1], target[2]);

  return 0;
}

void copy_ptr(double * t, double * s, int n)
{
  int i;

  for(i=0; i<n; i++)
    *(t+i)=*(s+i);
}
