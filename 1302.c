#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
  FILE *file_from, *file_to;
  int ch;

  if(argc<3)
  {
    fprintf(stderr, "Usage:%s filename\n", argv[0]);
    exit(EXIT_FAILURE);
  }

  if((file_from = fopen(argv[1], "r"))==NULL)
  {
    fprintf(stderr, "Can't open the file \"%s\"\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  if((file_to = fopen(argv[2], "w"))==NULL)
  {
    fprintf(stderr, "Can't create output file.\n");
    exit(EXIT_FAILURE);
  }

  while((ch=getc(file_from))!=EOF)
  {
    putc(ch, file_to);
  }

  if((fclose(file_from)!=0) || (fclose(file_to)!=0))
  fprintf(stderr, "Error in closing files\n");

  return 0;
}
