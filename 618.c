#include <stdio.h>
int main(void)
{
  int f=5;
  int n=1;

  do
  {
    f=(f-n)*2;

    printf("After %d weeks, number of friends is %d.\n",
    n, f);

    n++;
  }
  while(f<150);
  return 0;
}
