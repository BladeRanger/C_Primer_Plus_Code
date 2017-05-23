#include <stdio.h>
#include <string.h>
#define LIMIT 50

void reverse(char *string);
char *get(char *string, int n);
void clear_string(char *string, int n);

int main(void)
{
  char data[LIMIT];
  char *strptr;

  printf("Enter a string (Empty line to quit):\n");
  strptr = get(data, LIMIT);

  while(*strptr != '\0')
  {
    reverse(strptr);
    printf("\nThe reverse:\n");
    puts(strptr);

    printf("\nEnter another string (Empty line to quit):\n");
    clear_string(data, LIMIT);
    strptr = get(data, LIMIT);
  }

  printf("Bye\n");

  return 0;
}

void reverse(char *string)
{
  int n = strlen(string);
  char temp[n];
  int i;

  for(i=0; i<n; i++)
    *(temp+i) = *(string+n-i-1);
  for(i=0; i<n; i++)
    *(string+i) = *(temp+i);
}

char *get(char *string, int n)
{
  char *return_value = fgets(string, n, stdin);

  while(*string != '\0')
  {
    if(*string == '\n')
      *string = '\0';

    string++;
  }

  return return_value;
}

void clear_string(char *string, int n)
{
  for(int i=0; i<n; i++)
    *(string+i) = '\0';
}
