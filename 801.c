#include <stdio.h>
#include <ctype.h>
int main(void)
{
  int n = 0;
  char c;

  printf("Input and I will tell you the number of characters:\n\n");
  while((c=getchar())!=EOF)
  {
    if(!isspace(c))
      n++;
  }

  printf("\nThat's %d characters.\n", n);

  return 0;
}
