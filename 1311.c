#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 255

char *get(char *string, int n, FILE *fptr);
int main(int argc, char *argv[])
{
  char line[MAX];
  FILE *fp;

  if(argc!=3)
  {
    fprintf(stderr, "command line format wrong.\n");
    exit(EXIT_FAILURE);
  }

  if((fp=fopen(argv[2], "r"))==NULL)
  {
    fprintf(stderr, "Can't open file %s.\n", argv[2]);
    exit(EXIT_FAILURE);
  }

  puts("");
  while(get(line, MAX, fp) != NULL)
  {
    if(strstr(line, argv[1]) != NULL)
      puts(line);
  }

  puts("Done!\n");
  fclose(fp);
  return 0;
}

char *get(char *string, int n, FILE *fptr)
{
  char * return_value = fgets(string, n, fptr);

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
