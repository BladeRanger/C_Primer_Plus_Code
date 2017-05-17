#include <stdio.h>
int fa(int n);
int main(void)
{
  int m;

  printf("Enter which item you want to see in f series(<=0 to quit):\n");
  while(scanf("%d", &m)==1)
  {
    printf("f(%d) = %d\n", m, fa(m));
    while(getchar()!='\n')
      continue;
    printf("Enter again:\n");
  }
  printf("bye\n");
  return 0;
}

int fa(int n)
{
  int a1=1, a2=1;
  int f=1;
  int i;

  if(n>2)
  {
    for(i=1; i<=n-2; i++)
    {
      f=a1+a2;
      a1=a2;
      a2=f;
    }
  }
  return f;
}
