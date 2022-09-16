#include "main.h"

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int month = 1;
	int day = 29;
	int year = 2001;

	printf("Date: %02d/%02d/%04d\n",month,day,year);
	day = convert_day(month, day);
	print_remaining_days(month,day,year);
	return (0);
}
