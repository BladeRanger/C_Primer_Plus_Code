#include <stdio.h>
int main(void)
{
  float r=0.08;
  float remain=1000000.0;
  int n=1;

  do
  {
    remain = remain*(r+1) - 100000.0;
    n++;
    printf("%.2f\n", remain);
  }
  while(remain > 0);

  printf("It will take %d years.\n", n-1);

  return 0;
}
