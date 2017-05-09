#include <stdio.h>
#include <string.h>
int main(void)
{
  char c[255];
  int n=0;

  printf("Enter characters:\n");
  scanf("%s", c);

  printf("Here is the backward input:\n");
  for(n=strlen(c)-1; n>=0; n--)
    printf("%c", c[n]);

  printf("\n");

  return 0;
}
