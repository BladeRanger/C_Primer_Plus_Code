#include <stdio.h>
static int md = 0;
static float distance = 0;
static float fuel = 0;

void set_mode(int n)
{
  if(n>1)
    printf("Invalid mode specified. Mode %d %s used.\n",
            md, (md==0)?"(EU)":"(US)");
  else
  md = n;
}

void get_info(void)
{
  printf("Enter distance traveled in %s: ",
          (md==0)?"kilometers":"miles");
  scanf("%f", &distance);
  printf("Enter fuel consumed in %s: ",
          (md==0)?"liters":"gallons");
  scanf("%f", &fuel);
}

void show_info(void)
{
  printf("Fuel consumption is %.1f %s.\n",
          (md==0)?(fuel/distance*100):(distance/fuel),
          (md==0)?("liters per 100km"):("miles per gallon"));
}
