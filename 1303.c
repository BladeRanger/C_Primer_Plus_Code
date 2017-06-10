#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define MAX 100
char * get(char *string, int n);

int main(void)
{
  FILE *file_from, *file_to;
  char ch;
  char from_name[MAX], to_name[MAX];

  puts("Enter source file name: ");
  get(from_name, MAX);
  puts("Enter output file name: ");
  get(to_name, MAX);

  if((file_from = fopen(from_name, "r"))==NULL)
  {
    fprintf(stderr, "Can't open the file \"%s\"\n", from_name);
    exit(EXIT_FAILURE);
  }

  if((file_to = fopen(to_name, "w"))==NULL)
  {
    fprintf(stderr, "Can't create output file.\n");
    exit(3);
  }

  while((ch=getc(file_from))!=EOF)
  {
    putc(toupper(ch), file_to);
  }

  if((fclose(file_from)!=0) || (fclose(file_to)!=0))
  fprintf(stderr, "Error in closing files.\n");

  return 0;
}

char *get(char *string, int n)
{
  char *return_value = fgets(string, n, stdin);

  while(*string != '\0')
  {
    if(*string == '\n')
    {
      *string = '\0';
      break;
    }

    string++;
  }
  return return_value;
}
