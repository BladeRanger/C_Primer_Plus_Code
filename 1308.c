#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  char ch, character;
  int count;
  character = *(argv[1]);

  if(argc<2)
  {
    fprintf(stderr, "Usage:%s filename\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  if(argc==2)
  {
    count=0;
    while((ch=getchar())!=EOF)
    {
      if(ch==character)
      count++;
    }
    printf("Standard input has %d character %c.\n", count, character);
  }

  for(int i=2; i<argc; i++)
  {
    if((fp=fopen(argv[i], "r"))==NULL)
    {
      fprintf(stderr, "Can't open file %s.\n", argv[i]);
      continue;
    }

    count=0;
    while((ch=getc(fp))!=EOF)
    {
      if(ch==character)
      count++;
    }

    printf("File %s has %d character %c.\n", argv[i], count, character);

    fclose(fp);
  }

  puts("Done!");
  return 0;
}
