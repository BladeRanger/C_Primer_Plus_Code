#include <stdio.h>
int main(void)
{
  float mass = 3.0e-23; //mass of a single molecule of water
  int gram = 950; //grams of a quart of water
  float quart;

  printf("Please input the amount of water in quarts: \n");
  scanf("%f", &quart);
  printf("The number of water molecule in %f quarts of water is %.6e.\n",
        quart, quart * gram / mass);

  return 0;
}
