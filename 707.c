#include <stdio.h>
#define PAYRATE 10
#define BAND1_TAX 300 * 0.15
#define BAND2_TAX BAND1_TAX + 150 * 0.2

int main(void)
{
  float hour;
  float gross, tax, net;

  printf("Enter how many hours:\n");
  scanf("%f", &hour);

  if(hour>40.0)
    gross = 40.0 * PAYRATE + (hour-40.0) * PAYRATE * 1.5;
  else
    gross = hour * PAYRATE;

  if(gross<=300)
    tax = gross * 0.15;
  else if(gross <=450)
    tax = (gross-300) * 0.2 + BAND1_TAX;
  else
    tax=(gross-450) * 0.25 + BAND1_TAX + BAND2_TAX;

  net = gross - tax;

  printf("Gross:%.2f\nTax:%.2f\nNet:%.2f\n",
  gross, tax, net);

  return 0;
}
