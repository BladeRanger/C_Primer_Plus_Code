#include <stdio.h>
int main(void)
{
  char firstname[40], lastname[40];

  printf("Enter your firstname here:\n");
  scanf("%s", firstname);
  printf("Enter your lastname here:\n");
  scanf("%s", lastname);

  printf("That's %s, %s.\n", lastname, firstname);

  return 0;
}
