#include <stdio.h>
int main(void)
{
  char c;
  int n=0;

  while((c=getchar())!='#')
  {
    n++;
    printf("%c:%4d  ", c, c);

    if(n%8 == 0)
    printf("\n");
  }
  printf("\n");

  return 0;
}
