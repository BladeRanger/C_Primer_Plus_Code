#include <stdio.h>
#include <stdlib.h>
#define SLEN 81
int main(void)
{
  char file[SLEN];
  char ch;
  FILE *fp;
  long count, last, position;

  puts("Enter the name of the file to be processed:");
  scanf("%80s", file);
  if((fp=fopen(file, "r"))== NULL)
  {
    printf("can't open %s\n", file);
    exit(EXIT_FAILURE);
  }

  //fseek(fp, 0L, SEEK_END);
  //last = ftell(fp);

  puts("Enter the position of the file (q to quit):");
  while((scanf("%ld", &position)==1) && (position >= 0))
  {
    if(fseek(fp, position, SEEK_SET)!=0)
    {
      puts("Out of the file limit, try again:");
      while(getchar()!='\n')
       continue;
      continue;
    }

    while((ch=getc(fp))!='\n' && (ch != EOF))
      putchar(ch);

    puts("");
    puts("Enter the position again (q to quit):");
  }

  puts("Done!");
  fclose(fp);

  return 0;
}
