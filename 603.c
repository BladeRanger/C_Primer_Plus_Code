#include <stdio.h>
int main(void)
{
  int n, m;
  char c;

  for(n=1; n<7; n++)
  {
    for(m=0, c='F'; m<n; m++, c--)
    printf("%c", c);
    printf("\n");
  }
  return 0;
}
