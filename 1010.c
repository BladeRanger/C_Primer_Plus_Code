#include <stdio.h>
void sum(int * s1, int * s2, int * t, int n);
int main(void)
{
  int test1[4]={2, 4, 5, 8};
  int test2[4] = {1, 0, 4, 6};
  int target[4];

  sum(test1, test2, target, 4);
  printf("%d  %d  %d  %d  \n", target[0], target[1], target[2], target[3]);

  return 0;
}

void sum(int * s1, int * s2, int * t, int n)
{
  int i;
  for(i=0; i<n; i++)
  {
    *(t+i)=*(s1+i)+*(s2+i);
  }
}
