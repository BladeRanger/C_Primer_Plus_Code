#include <stdio.h>
int main(void)
{
  int n;

  printf("Enter and ASCII code value here and I will print the character:\n");
  scanf("%d", &n);
  printf("The character for the ASCII code %d is %c.\n", n, n);

  return 0;
}
