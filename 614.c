#include <stdio.h>
int main(void)
{
  float a[8], b[8];
  int m, n;
  float sum;

  printf("Enter 8 numbers: ");
  for(m=0; m<8; m++)
    scanf("%f", &a[m]);

  for(n=0, sum=0; n<8; n++)
  {
    sum += a[n];
    b[n] = sum;
  }

  for(n=0; n<8; n++)
  printf("%-6.2f  ", a[n]);
  printf("\n");

  for(n=0; n<8; n++)
  printf("%-6.2f  ", b[n]);
  printf("\n");

  return 0;
}
