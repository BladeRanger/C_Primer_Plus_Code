#include <stdio.h>
int main(void)
{
  int n;
  int even=0, odd=0, esum=0, osum=0;

  printf("Enter integers & end with 0: \n");
  while(scanf("%d", &n)==1)
  {
    if(n==0)
    break;
    else if(n%2==0)
    {
      even++;
      esum+=n;
    }
    else
    {
      odd++;
      osum+=n;
    }
  }

  printf("Even:%d, even average:%.2f\n",
  even, (float)esum/even);
  printf("Odd:%d, odd average:%.2f\n",
  odd, (float)osum/odd);

  return 0;
}
