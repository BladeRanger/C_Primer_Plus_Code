#include <stdio.h>
int main(void)
{
  int n, m;

  for(n=1; n<6; n++)
  {
    for(m=0; m<n; m++)
      printf("$");
    printf("\n");
  }
  return 0;
}
