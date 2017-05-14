#include <stdio.h>
#include <ctype.h>

char get_choice(void);
char get_first(void);
float get_num(void);
void calculate(char ch, float a, float b);

int main(void)
{
  float first_num, second_num;
  char choice;

  while((choice=get_choice())!='q')
  {
    printf("Enter first number: ");
    first_num = get_num();

    printf("Enter second number: ");
    second_num = get_num();
    while(choice=='d' && second_num==0)
    {
      printf("Enter a number other than 0: ");
      second_num = get_num();
    }

    calculate(choice, first_num, second_num);
  }

  printf("Bye.\n");

  return 0;
}

char get_choice(void)
{
  char ch;

  do
  {
    printf("Enter the operation of your choice:\n");
    printf("a. add              s. substract\n");
    printf("m. multiply         d. divide\n");
    printf("q. quit\n");
  }
  while((ch=get_first())!='a' && ch!='s' && ch!='m' && ch!='d' && ch!='q');

  return ch;
}

char get_first(void)
{
  char ch;

  do
  {
    ch=getchar();
  } while(isspace(ch));

  while(getchar()!='\n')
    continue;

  return ch;
}

float get_num(void)
{
  float x;
  char ch;

  while(scanf("%f", &x)!=1)
  {
    while((ch=getchar())!='\n')
      putchar(ch);
    printf(" is not a number.\n");
    printf("Please enter a number, such as 2.5, -1.78E8, or 3: ");
  }

  while(getchar()!='\n')
    continue;

  return x;
}

void calculate(char ch, float a, float b)
{
  switch(ch)
  {
    case 'a': printf("%.2f + %.2f = %.2f\n", a, b, a+b);
              break;
    case 's': printf("%.2f - %.2f = %.2f\n", a, b, a-b);
              break;
    case 'm': printf("%.2f * %.2f = %.2f\n", a, b, a*b);
              break;
    case 'd': printf("%.2f / %.2f = %.2f\n", a, b, a/b);
              break;
  }
}
