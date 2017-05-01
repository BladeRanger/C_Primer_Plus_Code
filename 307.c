#include <stdio.h>
int main(void)
{
  float centi = 2.54; // centimeters in an inch
  float height;

  printf("Please enter your height in inches:\n");
  scanf("%f", &height);
  printf("Your height in centimeters is %.2f.\n", height * centi);

  return 0;
}
