#include <stdio.h>
#include <ctype.h>

void firstword(char * st);
int main(void)
{
  char test[100];

  printf("Enter and I will get you the 1st word:\n");
  firstword(test);
  printf("\nHere it is:\n");
  puts(test);

  return 0;
}

void firstword(char * st)
{
  int i=0;
  char c;

  while(isspace(c=getchar()))
  continue;

  while(!isspace(c))
  {
    *(st+i)=c;
    i++;
    c=getchar();
  }
  *(st+i)= '\0';

  //while(getchar()!='\n')
  //continue;
}
