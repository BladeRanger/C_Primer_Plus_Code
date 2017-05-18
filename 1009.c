#include <stdio.h>
void copy_VLA(int row, int col, double target[row][col], double source[row][col]);
void show_VLA(int row, int col, double target[row][col]);

int main(void)
{
  double test[3][5] = { {1.1, 1.2, 1.3, 1.4, 9.5},
                        {2.1, 2.2, 6.3, 2.4, 2.5},
                        {3.1, 7.2, 3.3, 3.4, 3.5}
                      };
  double target[3][5];

  copy_VLA(3, 5, target, test);
  show_VLA(3, 5, test);
  show_VLA(3, 5, target);

  return 0;
}

void copy_VLA(int row, int col, double target[row][col], double source[row][col])
{
  int i, j;

  for(i=0; i<row; i++)
  {
    for(j=0;j<col;j++)
    *(*(target+i)+j)=*(*(source+i)+j);
  }
}

void show_VLA(int row, int col, double target[row][col])
{
  int i, j;

  for(i=0; i<row; i++)
  {
    for(j=0; j<col;j++)
      printf("%.1f   ", target[i][j]);
    printf("\n");
  }
}
