#include <stdio.h>
#include <ctype.h>
int main(void)
{
  int low=0, cap=0, other=0;
  int c;

  while((c=getchar())!=EOF)
  {
    if(islower(c))
      low++;
    else if(isupper(c))
      cap++;
    else
      other++;
  }
  printf("lowercase:%d    uppercase:%d    others:%d\n", low, cap, other);

  return 0;
}
