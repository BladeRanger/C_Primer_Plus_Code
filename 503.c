#include <stdio.h>
#define DAYS_IN_A_WEEK 7
int main(void)
{
  int day;

  printf("Enter the number of days(<=0 to quit):\n");
  scanf("%d", &day);

  while (day > 0)
  {
    printf("That's %d weeks and %d days.\n",
    day / DAYS_IN_A_WEEK, day % DAYS_IN_A_WEEK);
    printf("Enter another number of days (<=0 to quit):\n");
    scanf("%d", &day);
  }

  return 0;
}
