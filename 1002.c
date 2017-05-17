#include <stdio.h>

void copy_arr(double t[], double s[], int n);
void copy_ptr(double *t, double *s, int n);
void copy_ptrs(double *t, double *s, double *w);

int main(void)
{
  double source[5] = {5.1,2.2,3.3,9.4,5.5};
  double target1[5];
  double target2[5];
  double target3[5];
  int i;

  copy_arr(target1, source, 5);
  copy_ptr(target2, source, 5);
  copy_ptrs(target3, source, source+5);

  for(i=0; i<5; i++)
  printf("%.1f    %.1f    %.1f    \n",
  target1[i], target2[i], target3[i]);

  return 0;
}

void copy_arr(double t[], double s[], int n)
{
  int i;
  for(i=0; i<n; i++)
  t[i] = s[i];
}

void copy_ptr(double *t, double *s, int n)
{
  int i;
  for(i=0; i<n; i++)
  *(t+i)=*(s+i);
}

void copy_ptrs(double *t, double *s, double *w)
{
  for(double *ptr=s; ptr<w; ptr++, t++)
  *t= *ptr;
}
