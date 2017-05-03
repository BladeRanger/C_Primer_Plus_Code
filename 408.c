#include <stdio.h>
#define GALLON_TO_LITER 3.785
#define MILE_TO_KM 1.609
int main(void)
{
  float distance, fuel;

  printf("How many miles did you travel?\n");
  scanf("%f", &distance);
  printf("How many gallons of fuel did you use?\n");
  scanf("%f", &fuel);

  printf("That's %.1f mpg.\n", distance / fuel);

  printf("And it is %.1f liters-per-100km.\n",
  fuel * GALLON_TO_LITER / (distance * MILE_TO_KM / 100));
  return 0;
}
