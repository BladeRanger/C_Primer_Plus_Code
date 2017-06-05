#include <stdio.h>

static int call = 0;
int callfunc(void);

int main(void)
{
  int n;

  printf("Enter how many times you want to call the function (q to quit)?\n");
  while(scanf("%d", &n)==1)
  {
    if(n<0)
    {
      printf("Got to be a positive integer:\n");
      continue;
    }

    for(int i=0; i<n; i++)
    {
      call = callfunc();
    }

    printf("Called %d times.\n", call);
    call = 0;
    printf("Enter again (q to quit):\n");
  }

  puts("bye");
  return 0;
}

int callfunc(void)
{
  call++;
  return call;
}
