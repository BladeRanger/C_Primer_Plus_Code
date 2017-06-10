#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
  FILE *fp;
  char ch;

  if(argc<2)
  {
    fprintf(stderr, "Usage: %s filename\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  for(int i=1; i<argc; i++)
  {
    if((fp=fopen(argv[i], "r"))==NULL)
    {
      fprintf(stderr, "Can't open the file.\n");
      exit(EXIT_FAILURE);
    }

    printf("\nThis is the start of file No.%d.\n", i);
    while((ch=getc(fp))!=EOF)
      putchar(ch);
    printf("This is the end of file No.%d.\n\n", i);

    if(fclose(fp)!=0)
      fprintf(stderr, "Error in closing files\n");
  }

  return 0;
}
