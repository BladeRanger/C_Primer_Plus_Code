#include <stdio.h>
double power(double n, int p);
int main(void)
{
  double x, xpow;
  int exp;

  printf("Enter a number and an integer power ");
  printf("to which\nthe number will be raised. Enter q");
  printf(" to quit.\n");
  while(scanf("%lf%d", &x, &exp)==2)
  {
    xpow=power(x, exp);
    printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
    printf("Enter again or q to quit.\n");
  }
  printf("bye\n");

  return 0;
}

double power(double n, int p)
{
  double pow = 1;
  int i;

  if(0==n && 0==p)
    printf("0 to the 0 is undefined. Using a value 1 here.\n");
  else if (0==n && p!=0)
    pow = 0;
  else if(n!=0 && p==0)
    pow = 1;
  else if(p>0)
  {
    for(i=1; i<=p; i++)
    pow *=n;
  }
  else if(p<0)
  {
    for(i=-1; i>=p; i--)
    pow *= 1/n;
  }

    return pow;
}
