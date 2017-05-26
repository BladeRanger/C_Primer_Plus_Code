#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
  char c;

  printf("Enter and end with EOF.\n");

  while((c=getchar())!=EOF)
  {
    if(argc==1)
      putchar(c);
    else if((argc==2) && (strlen(argv[1])==2) && (argv[1][0]=='-'))
    {
      switch(argv[1][1])
      {
        case 'p': putchar(c);
                  break;
        case 'u': putchar(toupper(c));
                  break;
        case 'l': putchar(tolower(c));
                  break;
        default:  printf("Wrong argument: -p, -u, -l only.\n");
                  break;
      }
    }

    else
      printf("Wrong argument: -p, -u, -l only.\n");

    //return 0;
  }

  return 0;
}
