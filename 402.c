#include <stdio.h>
#include <string.h>
int main(void)
{
  char firstname[40];
  int a;

  printf("Enter your firstname here:\n");
  scanf("%s", firstname);
  a = strlen(firstname);
  printf("a.\"%s\"\n", firstname);
  printf("b.\"%20s\"\n", firstname);
  printf("c.\"%-20s\"\n", firstname);
  printf("d.\"%*s\"\n", a + 3, firstname);

  return 0;
}
