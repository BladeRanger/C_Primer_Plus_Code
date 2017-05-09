#include <stdio.h>
int main(void)
{
  int space = 0;
  int newline = 0;
  int others = 0;
  char c;

  while((c=getchar())!='#')
  {
    if(c==' ')
      space++;
    else if (c=='\n')
      newline++;
    else
      others++;
  }
  printf("space=%d  newline=%d  others=%d\n",
  space, newline, others);

  return 0;
}
