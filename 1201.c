#include <stdio.h>
int critic(void);
int main(void)
{
  int units;

  printf("How many pounds?\n");
  scanf("%d", &units);
  while(units!=56)
    units=critic();
  printf("You must have looked it up!\n");

  return 0;
}

int critic(void)
{
  int return_value;
  printf("No luck, my friend. Try again.\n");
  scanf("%d", &return_value);
  return return_value;
}
