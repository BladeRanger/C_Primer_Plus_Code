#include <stdio.h>
#include <ctype.h>
#define STLEN 100

char * search(char * st, char c);
int main(void)
{
  char test[STLEN];
  char ch;
  char * find;

  printf("Enter the text that you want to search (EOF to quit):\n");

  while(fgets(test, STLEN, stdin)!=NULL)
  {
    printf("Enter the character that you want to search:\n");
    ch=getchar();
    while(getchar()!='\n')
      continue;

    find = search(test, ch);

    if(find)
      printf("It's the No.%ld character.\n", (find-test+1));
    else
      printf("No match!\n");

    printf("Enter the text you want to search again (EOF to quit):\n");
  }

  return 0;
}

char * search(char * st, char c)
{
  while((*st != '\0'))
  {
    if (*st==c)
      return st;

    st++;
  }
    return NULL;
}
