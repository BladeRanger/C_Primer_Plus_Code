#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
  int word = 0, cha = 0;
  int c;
  bool inword = false;

  while((c = getchar()) != EOF)
  {
    if(isalpha(c))
    {
      cha++;
      if(!inword)
      {
        word++;
        inword = true;
      }
    }
    else
      inword = false;
  }

  printf("cha = %d, word = %d, cha per word = %.1f.\n", cha, word, (float)cha/word);

  return 0;
}
