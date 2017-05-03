#include <stdio.h>
#include <string.h>

int main(void)
{
  char firstname[40], lastname[40];
  int a, b;

  printf("Enter your firstname:\n");
  scanf("%s", firstname);
  a = strlen(firstname);
  printf("Enter your lastname:\n");
  scanf("%s", lastname);
  b = strlen(lastname);

  printf("%s %s\n", firstname, lastname);
  printf("%*d %*d\n", a, a, b, b);
  printf("%s %s\n", firstname, lastname);
  printf("%-*d %-*d\n", a, a, b, b);

  return 0;
}
