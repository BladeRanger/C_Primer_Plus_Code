#include <stdio.h>
#include <string.h>
int main(void)
{
  char w[40];
  int index=0, n;

  printf("Enter a word: \n");
  scanf("%s", w);

  printf("Here is the backward word:\n");

  for(n = strlen(w); n>0; n--)
    printf("%c", w[n-1]);
  printf("\n");

  return 0;
}
