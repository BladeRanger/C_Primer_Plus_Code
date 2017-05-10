#include <stdio.h>
#define BAND1_TAX 300 * 0.15
#define BAND2_TAX BAND1_TAX + 150 * 0.2
#define PR1 8.75
#define PR2 9.33
#define PR3 10.00
#define PR4 11.2

int main(void)
{
  float hour, payrate;
  float gross, tax, net;
  int n;

  printf("*****************************************************************\n");
  printf("Enter the number corresponding to the desired pay rate or action:\n");
  printf("1) $8.75/hr                      2) $9.33/hr\n");
  printf("3) $10.00/hr                     4) $11.20/hr\n");
  printf("5) quit\n");
  printf("*****************************************************************\n");

  while(scanf("%d", &n)==1)
  {
    if (n < 1 || n > 5)
    {
      printf("Please enter a number between 1 to 5:\n");
      continue;
    }

    if (5 == n)
      break;

    switch(n)
    {
      case 1: payrate = PR1;
              break;
      case 2: payrate = PR2;
              break;
      case 3: payrate = PR3;
              break;
      case 4: payrate = PR4;
              break;
    }

    printf("Enter how many hours:\n");
    scanf("%f", &hour);

    if(hour>40.0)
      gross = 40.0 * payrate + (hour-40.0) * payrate * 1.5;
    else
      gross = hour * payrate;

    if(gross<=300)
      tax = gross * 0.15;
    else if(gross <=450)
      tax = (gross-300) * 0.2 + BAND1_TAX;
    else
      tax=(gross-450) * 0.25 + BAND1_TAX + BAND2_TAX;

    net = gross - tax;

    printf("Gross:%.2f\nTax:%.2f\nNet:%.2f\n", gross, tax, net);
    printf("Enter another payrate number to calculate:\n");
}

  printf("bye\n");
  return 0;
}
