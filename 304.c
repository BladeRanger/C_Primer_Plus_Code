#include <stdio.h>
int main(void)
{
  float m;

  printf("Enter a floating-point value:");
  scanf("%f", &m);
  printf("fixed-point notation: %.6f\n", m);
  printf("exponential notation: %.6e\n", m);
  printf("p notation:%a\n", m);

  return 0;
}
