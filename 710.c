#include <stdio.h>
void tax(float a, float b);
int main(void)
{
  int n;
  float s;

  printf("Enter your tax category (5 to quit):\n");
  printf("1. Single            2. Head of household\n");
  printf("3. Married joint     4. Married seperate\n");
  printf("5. quit\n");

  while(scanf("%d", &n) == 1)
  {
    if(5==n)
      break;

    else if(n<1 || n>5)
    {
      printf("Got to be a number between 1 and 5.\n");
      continue;
    }

    else
    {
      printf("Enter your income:\n");
      scanf("%f", &s);

      switch (n)
      {
        case 1: tax(17850.00, s);
                break;
        case 2: tax(23900.00, s);
                break;
        case 3: tax(29750.00, s);
                break;
        case 4: tax(14875.00, s);
                break;
      }
      printf("Enter the category for next calculation (5 to quit):\n");
    }
  }
  printf("bye\n");

  return 0;
}

void tax(float a, float b)
{
  printf("Your income is %.2f. Tax is %.2f.\n",
          b, (b<a)?(0.15*b):(0.15*a+0.28*(b-a)));
}
