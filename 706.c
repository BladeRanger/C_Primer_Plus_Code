#include <stdio.h>
int main(void)
{
  char temp, c;
  int n=0;
  printf("Enter & end with #:\n");
  temp = getchar();

  while((c=getchar())!='#')
  {
    if(temp=='e' && c=='i')
      n++;

    temp = c;
  }
  printf("It is %d ei %s.\n",
  n, n>1?"combinations":"combination");

  return 0;
}
