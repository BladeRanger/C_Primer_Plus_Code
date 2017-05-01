#include <stdio.h>
int main(void)
{
  float cup;

  printf("how many cups?\n");
  scanf("%f", &cup);

  printf("That is %.2f pint; %.founces; %.ftablespoons; %.fteaspoons.\n",
        cup / 2, cup * 8, cup * 8 * 2, cup * 8 * 2 * 3);

  return 0;
}
