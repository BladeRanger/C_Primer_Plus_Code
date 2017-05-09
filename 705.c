#include <stdio.h>
int main(void)
{
  char c;
  int n=0;

  printf("Enter & use # to stop:\n");

  while((c=getchar())!='#')
  {
    switch(c)
    {
      case '.': printf("!");
                n++;
                break;
      case '!': printf("!!");
                n++;
                break;
      default: putchar(c);
               break;
    }
  }
    printf("\nsubstitution:%d\n", n);
    return 0;
  }
