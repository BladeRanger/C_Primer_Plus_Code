#include <stdio.h>
#define INCH_TO_CM 2.54
#define INCH_IN_FOOT 12
int main(void)
{
  float height, inch, left;
  int feet;

  printf("Enter a height in cm:");
  scanf("%f", &height);
  while (height > 0)
  {
    inch = height / INCH_TO_CM;
    feet = (int)(inch / INCH_IN_FOOT);
    left = inch - feet * INCH_IN_FOOT;
    printf("%.1f cm = %d feet, %.1f inches\n",
    height, feet, left);
    printf("Enter a height in cm (<=0 to quit):");
    scanf("%f", &height);
  }
  printf("bye\n");

  return 0;
}
