#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "1207_diceroll.h"

int main(void)
{
  int dice,roll;
  int sides;
  int sets;
  int status;

  srand((unsigned int) time(0));
  printf("Enter the number of sets, enter q to quit: ");

  while(scanf("%d", &sets)==1 && sets>0)
  {
    printf("How many sides and how many dice? ");

    while((status=scanf("%d%d", &sides, &dice))!=2)
    {
      if (status == EOF)
        break;
      else
      {
        printf("You should have entered two integers.");
        printf(" Let's begin again.\n");
        while (getchar() != '\n')
          continue;
        printf("How many sides and how many dices?\n");
        continue;
      }
    }

    printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);

    for(int i=0; i<sets; i++)
    {
      printf("%4d", roll_n_dice(dice, sides));
      if(i%15 == 14)
        puts("");
    }

    puts("");
    printf("How many sets? Enter q to stop: ");
  }

  return 0;
}



/*

  printf("Enter the number of sides per die, 0 to stop.\n");

  while (scanf("%d", &sides) == 1 && sides > 0 )
  {
    printf("How many dice?\n");
    if ((status =scanf("%d", &dice)) != 1)
    {
      if (status == EOF)
      break;
      else
      {
        printf("You should have entered an integer.");
        printf(" Let's begin again.\n");
        while (getchar() != '\n')
          continue;
          printf("How many sides? Enter 0 to stop.\n");
          continue;
      }
    }
    roll = roll_n_dice(dice, sides);
    printf("You have rolled a %d using %d %d-sided dice.\n", roll, dice, sides);
    printf("How many sides? Enter 0 to stop.\n");
  }
  printf("The rollem() function was called %d times.\n", roll_count);

  printf("GOOD FORTUNE TO YOU!\n");
  return 0;
}
*/
