#include <stdio.h>
void store(int row, int col, double targe[row][col]);
double average_row(int col, double target[col]);
double average_all(int row, int col, double target[row][col]);
double max(int row, int col, double target[row][col]);

int main(void)
{
  double test[3][5];
  int i;
  store(3, 5, test);

  for(i=0;i<3;i++)
  {
    printf("\nRow %d average is: %.2f.\n\n", i+1, average_row(5, *(test+i)));
  }

  printf("Overall average is: %.2f.\n\n", average_all(3, 5, test));

  printf("Max number is: %.2f.\n\n", max(3, 5, test));

  return 0;
}

void store(int row, int col, double target[row][col])
{
  int i, j;

  printf("Enter 15 numbers for a 3x5 array:\n");

  for(i=0; i<row; i++)
  {
    for(j=0; j<col; j++)
    scanf("%lf", &target[i][j]);
  }
}

double average_row(int col, double target[col])
{
  double total;
  int i;

  for(i=0, total =0; i<col; i++)
  total += target[i];

  return total/col;
}

double average_all(int row, int col, double target[row][col])
{
  int i, j;
  double total;
  for(i=0, total=0; i<row; i++)
  {
    for(j=0; j<col; j++)
    total += target[i][j];
  }

  return total/(5*row);
}

double max(int row, int col, double target[row][col])
{
  int i, j;
  double max = target[0][0];

  for(i=0; i<row; i++)
  {
    for(j=0; j<col; j++)
    {
      if(target[i][j] > max)
      max = target[i][j];
    }
  }

  return max;
}
