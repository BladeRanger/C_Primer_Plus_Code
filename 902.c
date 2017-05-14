#include <stdio.h>

void chline(char ch, int i, int j);

int main(void)
{
  char c;
  int m, n;

  printf("Enter a character:\n");
  c = getchar();
  while(getchar()!='\n')
    continue;

  printf("which colume to which colume?\n");
  while(scanf("%d %d", &m, &n)!=2)
  {
    printf("Need two integers:\n");
    while(getchar()!='\n')
      continue;
  }

  chline(c, m, n);

  return 0;
}

void chline(char ch, int i, int j)
{
  int m, n;

  for(m=1; m<i; m++)
    printf("*");
  for(n=i; n<=j; n++)
    printf("%c", ch);
  printf("\n");
}
