#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 81

char * get(char *string, int n);
int main(void)
{
  FILE *in, *out;
  int ch;
  char original[LEN];
  char name[LEN];
  int count=0;

  printf("Enter the original file name: \n");
  get(original, LEN);

  if((in=fopen(original, "r"))==NULL)
  {
    fprintf(stderr, "Can't open the file \"%s\"\n", original);
    exit(EXIT_FAILURE);
  }

  strncpy(name, original, LEN-5);
  name[LEN-5]='\0';
  strcat(name, ".red");

  if((out=fopen(name, "w"))==NULL)
  {
    fprintf(stderr, "Can't create output file.\n");
    exit(3);
  }

  while((ch=getc(in))!=EOF)
  if(count++ % 3 == 0)
  putc(ch, out);

  if(fclose(in)!=0 || fclose(out)!=0)
  fprintf(stderr, "Error in closing files\n");

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
