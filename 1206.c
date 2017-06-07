#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 1000

int main(void)
{
  int ones, twos, threes, fours, fives, sixs, sevens, eights, nines, tens;
  int num;

  puts("1    2    3    4    5    6    7    8    9    10    All");

  for (int i=0; i<10; i++)
  {
    ones=twos=threes=fours=fives=sixs=sevens=eights=nines=tens=0;
    srand(i);

    for(int j=0; j<MAX; j++)
    {
      num = rand()%10 + 1;

      switch(num)
      {
        case 1:  ones++;
                 break;
        case 2:  twos++;
                 break;
        case 3:  threes++;
                 break;
        case 4:  fours++;
                 break;
        case 5:  fives++;
                 break;
        case 6:  sixs++;
                 break;
        case 7:  sevens++;
                 break;
        case 8:  eights++;
                 break;
        case 9:  nines++;
                 break;
        case 10: tens++;
                 break;
        default: break;
      }
    }

    printf("%-5d%-5d%-5d%-5d%-5d%-5d%-5d%-5d%-5d%-5d%-5d\n", ones, twos,
            threes, fours, fives, sixs, sevens, eights, nines, tens,
            ones+twos+threes+fours+fives+sixs+sevens+eights+nines+tens);

  }

  return 0;
}
