#include <stdio.h>
int main(void)
{
  char c, h;
  int x, n, m, p, q;
  printf("Enter a capital letter: ");
  scanf("%c", &c);

  x = c - 'A';

  for(n=1; n<(c-'A'+2); n++, x--)
  {
    for(m=0; m<x; m++)
      printf(" ");
    for(p=0, h ='A'; p<n; p++, h++)
      printf("%c", h);
    for(q=0, h-=2; q<n-1; q++, h--)
      printf("%c", h);
    printf("\n");
  }
  return 0;
}
