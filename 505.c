#include <stdio.h>
int main(void)
{
  int count, sum;
  int num;

  count = 0;
  sum = 0;

  printf("Enter how many numbers you want to \
see the sum from 0:\n");
  scanf("%d", &num);

  while (count++ < num)
  {
    sum = sum + count;
  }
  printf("sum = %d \n", sum);

  return 0;
}
