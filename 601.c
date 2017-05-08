#include <stdio.h>
#define SIZE 26
int main(void)
{
  char letter[SIZE];
  int n;
  char c;

  for(n=0, c='a'; n<SIZE; n++, c++)
    letter[n] = c;

  for(n=0; n<SIZE; n++)
    printf("letter[%d] = %c\n", n, letter[n]);

  return 0;
}
