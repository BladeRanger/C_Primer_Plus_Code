#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 100

static int data[MAX];

void assign_data(void);
void print_data(void);
void sort_data(void);

int main(void)
{
  assign_data();
  printf("\nHere is the original random data:\n");
  print_data();
  sort_data();
  printf("\nThis is the sorted data:\n");
  print_data();

  return 0;
}

void assign_data(void)
{
  srand((unsigned int)time(0));

  for(int i=0; i<MAX; i++)
  {
    data[i] = rand() % 10 + 1;
  }
}

void print_data(void)
{
  for(int i = 0; i<MAX; i++)
  {
    printf("%4d", data[i]);
    if(i%10 == 9)
      puts("");
  }
}

void sort_data(void)
{
  int temp;

  for(int i=0; i<MAX; i++)
  {
    for(int j=i+1; j<MAX; j++)
    {
      if(data[i]<data[j])
      {
        temp = data[i];
        data[i] = data[j];
        data[j] = temp;
      }
    }
  }
}
