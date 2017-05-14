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

  printf("How many times and how many lines?\n");
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

  for(n=0; n<j; n++)
  {
    for(m=0; m<i; m++)
    {
      printf("%c", ch);
    }
    printf("\n");
  }
}
