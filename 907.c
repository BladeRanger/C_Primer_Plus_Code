#include <stdio.h>
#include <ctype.h>

int alphabet(char ch);
int main(void)
{
  char c;

  printf("Enter and end with EOF:\n");

  c=getchar();
  while(c!=EOF)
  {
    if(!isspace(c))
      printf("%c   letter:%3s   Alphabet position:%2d\n", c,
    ((c>='a' && c<='z')||(c>='A'&&c<='Z'))?"Yes":" No", alphabet(c));

    c=getchar();
  }
  printf("Done\n");

  return 0;
}

int alphabet(char ch)
{
  int n;

  if(ch>='a' && ch<='z')
    n=ch-'a'+1;
  else if(ch>='A' && ch<='Z')
    n=ch-'A'+1;
  else
    n=-1;

  return n;
}
