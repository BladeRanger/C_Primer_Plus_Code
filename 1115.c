#include <stdio.h>
#include <string.h>
#include <ctype.h>

int myatoi(char *string);
int tenpow(int n);

int main(int argc, char * argv[])
{
  printf("\n%d\n", myatoi(argv[1]));

  return 0;
}

int myatoi(char *string)
{
  int n=strlen(string);
  int return_value=0;
  int x;

  for(int i=n-1; i>=0; i--)
  {
    if(!isdigit(string[i]))
    {
      return_value=0;
      break;
    }

    else
    {
      x=(int)(string[i]-'0');
      return_value += x * tenpow(n-i-1);
    }
  }

  return return_value;
}

int tenpow(int n)
{
  int return_value = 1;

  if(n==0)
    return_value = 1;
  for(int i=0; i<n; i++)
    return_value *= 10;

  return return_value;
}
