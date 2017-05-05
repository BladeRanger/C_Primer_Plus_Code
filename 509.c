#include <stdio.h>
const float RATIO = 5.0 / 9.0;
const float P1 = 32.0;
const float P2 = 273.16;

void temperature (float temp);

int main(void)
{
  float input;

  printf("Enter a temperature in Fahrenheit (type q to quit):\n");

  while (scanf("%f", &input) == 1)
  {
    temperature(input);
    printf("Enter another temperature in Fahrenheit (type q to quit):\n");
  }
  printf("bye\n");

  return 0;
}

void temperature (float temp)
{
  float celsius, kelvin;

  celsius = RATIO * (temp - P1);
  kelvin = celsius + P2;

  printf("Fahrenheit = %.2f\nCelsius = %.2f\nKelvin = %.2f\n",
  temp, celsius, kelvin);
}
