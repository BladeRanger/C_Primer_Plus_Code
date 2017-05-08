#include <stdio.h>
int main(void)
{
  int x[8];
  int n;

  printf("Enter 8 integers: ");
  for(n=0; n<8; n++)
    scanf("%d", &x[n]);

  printf("Here is the backward numbers: ");
  for(n=7; n>=0; n--)
    printf("%d ", x[n]);

  printf("\n");

  return 0;
}
