#include <stdio.h>
int main(void)
{
  float height;
  char name[40];

  printf("Enter your height in centimetres:\n");
  scanf("%f", &height);
  printf("Enter your name:\n");
  scanf("%s", name);

  printf("%s, you are %.3f meter tall.\n",
  name, height / 100);

  return 0;
}
