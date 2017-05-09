#include <stdio.h>
int main(void)
{
  char c;
  int n=0;

  printf("Enter & use # to stop;\n");
  while((c=getchar())!='#')
  {
    if(c=='.')
    {
      printf("!");
      n++;
    }

    else if(c=='!')
    {
      printf("!!");
      n++;
    }

    else
      putchar(c);
  }

  printf("\nsubstitution:%d\n", n);

  return 0;
}
