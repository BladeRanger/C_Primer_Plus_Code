#include <stdio.h>
int main(void)
{
  float s = 3.156e7; //seconds in a year
  int age;

  printf("How old are you?\n");
  scanf("%d", &age);

  printf("You have lived %.6e seconds.\n", s * age);

  return 0;
}
