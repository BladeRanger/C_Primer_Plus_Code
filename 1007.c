#include <stdio.h>
void cpy_ptr(double * t, double * s, int n);

int main(void)
{
  double test[3][5] = { {1.1, 1.2, 1.3, 1.4, 9.5},
                        {2.1, 2.2, 6.3, 2.4, 2.5},
                        {3.1, 7.2, 3.3, 3.4, 3.5}
                      };
double target[3][5];
int i, j;

for(i=0; i<3; i++)
cpy_ptr(target[i], test[i], 5);

for(i=0; i<3; i++)
{
  for(j=0;j<5;j++)
  printf("%.1f  ", target[i][j]);

  printf("\n");
}

return 0;
}

void cpy_ptr(double * t, double * s, int n)
{
  int i;
  for(i=0; i<n; i++)
  *(t+i) = *(s+i);
}
