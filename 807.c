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
  char ch;

  printf("*****************************************************************\n");
  printf("Enter the number corresponding to the desired pay rate or action:\n");
  printf("a) $8.75/hr                      b) $9.33/hr\n");
  printf("c) $10.00/hr                     d) $11.20/hr\n");
  printf("q) quit\n");
  printf("*****************************************************************\n");

  while((ch=getchar())!='q')
  {
    while(getchar()!='\n')
      continue;

    if (ch < 'a' || ch > 'd')
    {
      printf("Please enter a, b, c, d or q:\n");
      continue;
    }

    switch(ch)
    {
      case 'a': payrate = PR1;
              break;
      case 'b': payrate = PR2;
              break;
      case 'c': payrate = PR3;
              break;
      case 'd': payrate = PR4;
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
    printf("Enter another payrate option to calculate:\n");
    while(getchar()!='\n')
      continue;
}

  printf("bye\n");
  return 0;
}
