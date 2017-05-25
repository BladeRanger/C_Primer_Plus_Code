#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 50
void nospace(char *string);
void clear_string(char *string, int n);
char *get(char *string, int n);

int main(void)
{
  char data[LIMIT];
  char *strptr;

  printf("Enter a string (empty line to quit):\n");
  strptr = get(data, LIMIT);

  while(*strptr != '\0')
  {
    nospace(strptr);
    printf("\nNo space:\n");
    puts(strptr);

    printf("Enter again (empty line to quit):\n");

    clear_string(strptr, LIMIT);
    strptr = get(data, LIMIT);

  }

  puts("Bye");
  return 0;
}

void nospace(char *string)
{
  unsigned long spaces_found = 0;

  	while (1)
  	{
  		if (*string == ' ')
  			spaces_found++;
  		else
  			*(string - spaces_found) = *string;

  		// if end of string, break
  		if (*string == '\0')
  			break;

  		string++;
  	}

/*
  char temp[LIMIT];
  int i;
  int j = 0;

  for(i=0; (i<LIMIT); i++)
  {
    if(!isspace(*(string+i)))
    {
      *(temp+j) = *(string+i);
      j++;
    }
  }

  clear_string(string, LIMIT);
  strcpy(string, temp);
*/
}

void clear_string(char *string, int n)
{
  for(int i = 0; i<n; i++)
    string[i] = '\0';
}

char *get(char *string, int n)
{
  char *return_value = fgets(string, n, stdin);

  while(*string != '\0')
  {
    if(*string == '\n')
    {
      *string = '\0';
      break;
    }

    string++;
  }

  return return_value;
}
