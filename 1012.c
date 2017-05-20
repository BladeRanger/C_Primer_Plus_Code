#include <stdio.h>
//#define MONTHS 12 // number of months in a year
//#define YEARS 5 // number of years of data
void print_annual_average(int years, int months, float data[years][months]);
void print_monthly_averages(int years, int months, float data[years][months]);

int main(void)
{
// initializing rainfall data for 2010 - 2014
float rain[5][12] = {
                            {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
                            {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
                            {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
                            {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
                            {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
                          };

  print_annual_average(5, 12, rain);
	print_monthly_averages(5, 12, rain);

	return 0;
}

/*
int year, month;
float subtot, total;

printf(" YEAR RAINFALL (inches)\n");
for (year = 0, total = 0; year < YEARS; year++)
{
// for each year, sum rainfall for each month
for (month = 0, subtot = 0; month < MONTHS; month++) subtot += rain[year][month];
printf("%5d %15.1f\n", 2010 + year, subtot);
total += subtot; // total for all years
}
printf("\nThe yearly average is %.1f inches.\n\n", total/YEARS);
printf("MONTHLY AVERAGES:\n\n");
printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
printf(" Nov Dec\n");
for (month = 0; month < MONTHS; month++)
{ // for each month, sum rainfall over years
for (year = 0, subtot =0; year < YEARS; year++) subtot += rain[year][month];
printf("%4.1f ", subtot/YEARS); }
printf("\n");
return 0; }
*/


void print_annual_average(int years, int months, float data[years][months])
{
	float subtotal, total;
  int i, j;

	printf(" YEAR RAINFALL (inches)\n");

	for (i = 0, total = 0; i < years; i++)
	{
		for (int j = 0, subtotal = 0; j < months; j++)
			subtotal += data[i][j];

		printf("%5d %15.1f\n", 2010 + i, subtotal);
		total += subtotal;
	}
	printf("\nThe yearly average is %.1f inches.\n\n", total/years);
}



void print_monthly_averages(int years, int months, float data[years][months])
{
	float subtotal;
  int i, j;

	printf("MONTHLY AVERAGES:\n\n");
	printf(" Jan Feb Mar Apr May Jun Jul Aug Sep Oct ");
  printf(" Nov Dec\n");

	for (i = 0; i < months; i++)
	{
		for (j = 0, subtotal = 0; j < years; j++)
			subtotal += data[i][j];

		printf("%4.1f ", subtotal/years);
	}
	printf("\n");
}
