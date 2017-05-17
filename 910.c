#include <stdio.h>
void to_base_n(unsigned long m, int n);

int main(void)
{
  unsigned long number;
  int x;

  printf("Enter and integer and wanted base number between 2 to 10:\n");
  while(scanf("%lu%d", &number, &x)==2)
  {
    printf("Equivalent of base %d:", x);
    to_base_n(number, x);
    putchar('\n');
    printf("Enter again:\n");
  }
  printf("Done\n");
  return 0;
}

void to_base_n(unsigned long m, int n)
{
  int r;
  r = m % n;
  if(m>=n)
  to_base_n(m/n, n);
  putchar('0'+r);

  return;
}
