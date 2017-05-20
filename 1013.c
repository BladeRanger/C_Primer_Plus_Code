#include <stdio.h>
void store(double target[][5], int n);
double average_row(double target[], int n);
double average_all(double target[][5], int n);
double max(double target[][5], int n);

int main(void)
{
  double test[3][5];
  int i;
  store(test, 3);

  for(i=0;i<3;i++)
  {
    printf("\nRow %d average is: %.2f.\n\n", i+1, average_row(*(test+i), 5));
  }

  printf("Overall average is: %.2f.\n\n", average_all(test, 3));

  printf("Max number is: %.2f.\n\n", max(test, 3));

  return 0;
}
void store(double target[][5], int n)
{
  int i, j;

  printf("Enter 15 numbers for a 3x5 array:\n");

  for(i=0; i<n; i++)
  {
    for(j=0; j<5; j++)
    scanf("%lf", &target[i][j]);
  }
}

double average_row(double target[], int n)
{
  double total;
  int i;

  for(i=0, total =0; i<n; i++)
  total += target[i];

  return total/n;
}

double average_all(double target[][5], int n)
{
  int i, j;
  double total;
  for(i=0, total=0; i<n; i++)
  {
    for(j=0; j<5; j++)
    total += target[i][j];
  }

  return total/(5*n);
}

double max(double target[][5], int n)
{
  int i, j;
  double max = target[0][0];

  for(i=0; i<n; i++)
  {
    for(j=0; j<5; j++)
    {
      if(target[i][j] > max)
      max = target[i][j];
    }
  }

  return max;
}
