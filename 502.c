#include <stdio.h>
int main(void)
{
  int x, n;
  n = 0;

  printf("Enter an integer:\n");
  scanf("%d", &x);

  while(n++ < 10)
  {
    printf("%d\n", x++);
  }

  printf("%d\n", x);

  return 0;
}
