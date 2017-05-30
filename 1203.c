#include <stdio.h>
int set_mode(int mode, int md);
float get_distance(int n);
float get_fuel(int n);
void show_info(float distance, float fuel, int n);

int main(void)
{
  int mode=0, md;
  float distance, fuel;

  printf("Enter 0 for metric mode, 1 for US mode: ");
  scanf("%d", &md);
  while(md>=0)
  {
    mode = set_mode(mode, md);
    distance = get_distance(mode);
    fuel = get_fuel(mode);
    show_info(distance, fuel, mode);

    printf("Enter 0 for metric mode, 1 for US mode (-1 to quit): ");
    scanf("%d", &md);
  }

  printf("Done.\n");
  return 0;
}

int set_mode(int mode, int md)
{
  if(md>1)
  {
    printf("Invalid mode specified. Mode %d %s used.\n",
            mode, (mode==0)?"(EU)":"(US)");
    return mode;
  }

  return md;
}

float get_distance(int n)
{
  float return_value;
  printf("Enter distance traveled in %s.\n",
          (n==0)?"kilometers":"miles");
  scanf("%f", &return_value);
  return return_value;
}

float get_fuel(int n)
{
  float return_value;
  printf("Enter fuel consumption in %s.\n",
          (n==0)?"liters":"gallons");
  scanf("%f", &return_value);
  return return_value;
}

void show_info(float distance, float fuel, int n)
{
  printf("Fuel consumption is %.1f %s.\n",
          (n==0)?(fuel/distance*100):(distance/fuel),
          (n==0)?("liters per 100km"):("miles per gallon"));
}
