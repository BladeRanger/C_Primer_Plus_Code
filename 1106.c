#include <stdio.h>
#include <string.h>
char * is_within(char ch, char * st);
int main(void)
{
  char c;
  char test[20];

  printf("Enter the character:\n");
  c=getchar();
  while(getchar()!='\n')
    continue;

  printf("Enter the string (EOF to quit):\n");

  while(fgets(test, 20, stdin)!=NULL)
  {
    printf("\n%s\n", is_within(c, test)?"yes!":"No!");

    printf("Enter another character:\n");
    c=getchar();
    while(getchar()!='\n')
      continue;
    printf("Enter another string (EOF to quit):\n");
  }
  return 0;
}

char * is_within(char ch, char * st)
{
  return strchr(st, ch);
}
