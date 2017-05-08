#include <stdio.h>
int main(void)
{
  float a, b;

  printf("Enter 2 numbers: ");
  while(scanf("%f%f", &a, &b) == 2)
  {
    printf("(%.2f - %.2f) / (%.2f * %.2f) = %.2f\n",
    a, b, a, b, (a-b) / (a*b));

    printf("Enter another 2 numbers: ");
  }
  printf("Got to be  2 numbers! Bye.\n");
  return 0;
}
