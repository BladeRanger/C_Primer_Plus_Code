#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
  printf("\n%c\n", get_first());

  return 0;
}

char get_first(void)
{
  int ch;

  do
  {
    ch = getchar();
  } while(isspace(ch));

  while(getchar()!='\n')
    continue;

  return ch;
}
