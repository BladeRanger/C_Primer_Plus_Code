#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
  char ** word_ptr;
  int words, word_count, letter_count;
  char ch;
  char temp[50];

  printf("How many words do you wish to enter?  ");
  scanf("%d", &words);
  printf("Enter %d words now:\n", words);
  while(getchar()!='\n')
    continue;

  char *temp_ptr[words];
  word_ptr = (char **)malloc(words * sizeof(char *));

  word_count = 0;
  while(word_count < words)
  {
    letter_count = 0;
    while(!isspace(ch=getchar()))
    {
      temp[letter_count] = ch;
      letter_count++;
    }
    temp[letter_count] = '\0';

    temp_ptr[word_count] = (char *)malloc((letter_count+1) * sizeof(char));
    word_ptr = temp_ptr;

    for(int i=0; i<letter_count+1; i++)
      temp_ptr[word_count][i] = temp[i];

    word_count++;
  }

  puts("Here are your words: ");
  for(int i=0; i<word_count; i++)
    puts(word_ptr[i]);

  //free(word_ptr);
  //free(temp_ptr);

  return 0;
}
