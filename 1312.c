#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROW 20
#define COLUMN 30

char *get(char *string, int n, FILE *fptr);
char transfer(char ch);

int main(int argc, char *argv[])
{
  char data[ROW][COLUMN+1];
  char picture[ROW][COLUMN+1];
  FILE *fp_data, *fp_picture;
  int ch;

  if(argc!=3)
  {
    fprintf(stderr, "Need to specify the file correctly.\n");
    exit(EXIT_FAILURE);
  }

  if((fp_data=fopen(argv[1], "r"))==NULL)
  {
    fprintf(stderr, "Can't open %s.\n", argv[1]);
    exit(EXIT_FAILURE);
  }

  rewind(fp_data);
  for(int i=0; i<ROW; i++)
    get(data[i], COLUMN+2, fp_data);

  fclose(fp_data);

  puts("\nHere is the initial data:\n");
  for(int i=0; i<ROW; i++)
    puts(data[i]);

  for(int i=0; i<ROW; i++)
    for(int j=0; j<COLUMN+1; j++)
      picture[i][j] = transfer(data[i][j]);

  puts("\nHere is the picture:\n");
  for(int i=0; i<ROW; i++)
    puts(picture[i]);

  if((fp_picture=fopen(argv[2], "w"))==NULL)
  {
    fprintf(stderr, "Can't create file %s.\n", argv[2]);
    exit(EXIT_FAILURE);
  }

  for(int i=0; i<ROW; i++)
  {
    fprintf(fp_picture, "%s", picture[i]);
    fprintf(fp_picture, "\n");
  }

  fclose(fp_picture);

  return 0;
}

char *get(char *string, int n, FILE *fptr)
{
  char * return_value = fgets(string, n, fptr);
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

char transfer(char ch)
{
  switch(ch)
  {
    case '0': ch = ' ';
              break;
    case '1': ch = '.';
              break;
    case '2': ch = '\'';
              break;
    case '3': ch = ':';
              break;
    case '4': ch = '~';
              break;
    case '5': ch = '*';
              break;
    case '6': ch = '=';
              break;
    case '7': ch = '}';
              break;
    case '8': ch = '%';
              break;
    case '9': ch = '#';
              break;
    default:  break;
  }
  return ch;
}
