#include <stdio.h>
#include <string.h>
#define LIMIT 50

char *string_in(char *string1, char *string2);
char * get(char * string, int n);
void clear_string(char *string, int n);

int main(void)
{
  char s1[LIMIT];
  char s2[LIMIT];

  printf("Enter the 1st string:\n");
  get(s1, LIMIT);

  printf("Enter the 2nd string:\n");
  get(s2, LIMIT);

  while(*s1 != '\0' && *s2 != '\0')
  {
    printf("\n%s\n", string_in(s1, s2)?string_in(s1, s2):"No match!");

    clear_string(s1, LIMIT);
    clear_string(s2, LIMIT);

    printf("Enter the 1st string again (empty to quit):\n");
    get(s1, LIMIT);
    printf("Enter the 2nd string again (empty to quit):\n");
    get(s2, LIMIT);
  }

  return 0;
}

char *string_in(char *string1, char *string2)
{
  int i, j;
  _Bool find = 0;

  for(i=0; i<strlen(string1); i++)
  {
    for(j=0; j<strlen(string2); j++)
    {
      if(*(string1 +i +j) == *(string2 +j))
        find = 1;
      else
      {
        find = 0;
        break;
      }
    }

    if(find)
      break;
  }

  return (find)?(string1+i):NULL;
}

char * get(char * string, int n)
{
  char * return_value = fgets(string, n, stdin);

  while (*string != '\0')
  {
    if (*string == '\n')
    {
      *string = '\0';
      break;
    }

    string++;
  }

  return return_value;
}

void clear_string(char *string, int n)
{
  for (int i = 0; i < n; i++)
    string[i] = '\0';
}
