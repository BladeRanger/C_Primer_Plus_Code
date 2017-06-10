#include <stdio.h>
#include <stdlib.h>
#define MAX 100

char *get(char *string, int n);
int main(void)
{
  int ch;
  char filename[MAX];
  unsigned long count = 0;
  FILE *fp;

  puts("Enter file name: ");
  get(filename, MAX);

  if((fp=fopen(filename, "r"))==NULL)
  {
    printf("Can't open %s\n", filename);
    exit(EXIT_FAILURE);
  }

  while((ch=getc(fp))!=EOF)
  {
    putc(ch, stdout);
    count++;
  }

  fclose(fp);
  printf("File %s has %lu characters\n", filename, count);

  return 0;
}

char * get(char *string, int n)
{
  char * return_value = fgets(string, n, stdin);

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
