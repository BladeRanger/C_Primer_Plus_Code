#include <stdio.h>
#define LIMIT 50

char * mystrncpy(char * target, char * source, int n);
char * get(char * string, int n);
void clear_string(char *string, int n);

int main(void)
{
  char target[LIMIT];
  char source[LIMIT];
  int n;

  printf("Enter a string you want to copy:\n");
  get(source, LIMIT);

  while(*source != '\0')
  {
    printf("How many characters do you want to copy? Maximum %d characters:\n",
            LIMIT);
    scanf("%d", &n);
    while(getchar()!='\n')
      continue;

    if(n>LIMIT)
      n = LIMIT;

    printf("Orginal string: %s\n", source);
    mystrncpy(target, source, n);
    printf("Copy: %s\n", target);

    clear_string(target, LIMIT);

    printf("Enter a string to copy (empty line to quit):\n");
    get(source, LIMIT);
  }

  puts("Bye\n");

  return 0;
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
  for (int i=0; i<n; i++)
    string[i]='\0';
}

char * mystrncpy(char * target, char * source, int n)
{
  int i = 0;

  while (source[i] != '\0' && i<n)
  {
    target[i] = source [i];
    i++;
  }

  while (i<n)
  {
    target[i] = '\0';
    i++;
  }

  return target;
}
