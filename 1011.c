#include <stdio.h>
void show(int target[][5], int row);
void dl(int (* target)[5], int row);

int main(void)
{
  int test[3][5] = {
    {2,4,6,8,10},
    {12,14,16,18,20},
    {22,24,26,28,30}
  };

  show(test, 3);
  dl(test, 3);
  show(test, 3);

  return 0;
}

void show(int target[][5], int row)
{
  int i, j;
  for(i=0;i<row;i++)
  {
    for(j=0;j<5;j++)
      printf("%2d  ", target[i][j]);
    printf("\n");
  }
}

void dl(int (* target)[5], int row)
{
  int i, j;
  for(i=0;i<row;i++)
  {
    for(j=0; j<5; j++)
    *(*(target+i)+j) *= 2;
  }

}
