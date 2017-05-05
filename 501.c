#include <stdio.h>
#define MIN_PER_HOUR 60
int main(void)
{
  int minute;
  printf("Enter the total minutes (<=0 to quit):\n");
  scanf("%d", &minute);
  while (minute > 0)
  {
    printf("That's %d hours and %d minutes.\n",
    minute / MIN_PER_HOUR, minute % MIN_PER_HOUR);
    printf("Enter another number of minutes (<=0 to quit):\n");
    scanf("%d", &minute);
  }

  return 0;
}
