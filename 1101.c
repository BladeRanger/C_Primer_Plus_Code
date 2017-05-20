#include <stdio.h>
#include <ctype.h>

void store(char * target);

int main(void)
{
  char test[20];

  printf("Enter and I will store 10 characters;\n");
  store(test);

  printf("\nHere are the stored characters:\n");
  puts(test);

  return 0;
}

void store(char * target)
{
  char input[20];
  int i = 0;

  if(fgets(input, 20, stdin))
  {
    for(i=0; i<10; i++)
    *(target+i) = *(input+i);
  }
}
