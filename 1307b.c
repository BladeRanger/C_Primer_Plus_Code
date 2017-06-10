#include <stdio.h>
#include <stdlib.h>
#define MAX 256

char *get(char *string, int n, FILE *fp);
int main(int argc, char *argv[])
{
  FILE *fp1, *fp2;
  char line1[MAX], line2[MAX];
  char *l1, *l2;

  if(argc<3)
  {
    fprintf(stderr, "Usage: %s filename\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  if((fp1=fopen(argv[1], "r"))==NULL)
  {
    fprintf(stderr, "Can't open the file %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  if((fp2=fopen(argv[2], "r"))==NULL)
  {
    fprintf(stderr, "Can't open the file %s\n", argv[2]);
    exit(EXIT_FAILURE);
  }

  puts("Here are the data in two files:");
  l1 = get(line1, MAX, fp1);
  l2 = fgets(line2, MAX, fp2);
  while(l1 || l2)
  {
    if(l1)
      fputs(line1, stdout);
    if(l2)
      fputs(line2, stdout);

    l1 = get(line1, MAX, fp1);
    l2 = fgets(line2, MAX, fp2);
  }

  puts("Done!");

  if(fclose(fp1)!=0 || fclose(fp2)!=0)
  fprintf(stderr, "file close error\n");

  return 0;
}

char *get(char *string, int n, FILE *fp)
{
  char * return_value = fgets(string, n, fp);
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
