#include <stdio.h>
#include <ctype.h>

int main(void)
{
  int c;
  int word, upper, lower, punct, digit;
  word = upper = lower = punct = digit = 0;
  _Bool inword = 0;

  while((c=getchar()) != EOF)
  {
    if(isalpha(c))
    {
      if(!isspace(c) && !inword)
      {
        inword =1;
        word++;
      }

      if(islower(c))
        lower++;

      if(isupper(c))
        upper++;
    }

    else if(isspace(c) && inword)
      inword = 0;

    if(isdigit(c))
      digit++;

    if(ispunct(c))
      punct++;
  }

  printf("Words: %d\n", word);
  printf("digits: %d\n", digit);
  printf("punctuations: %d\n", punct);
  printf("lowercase: %d\n", lower);
  printf("uppercase: %d \n", upper);
  return 0;
}
