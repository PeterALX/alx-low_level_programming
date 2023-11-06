#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to be converted
 * Return: the integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int total = 0;
	char null_flag = 0;

	while (*s)
	{
		if (*s == '-')
			sign *= -1;

		if (*s >= '0' && *s <= '9')
		{
			null_flag = 1;
			total = total * 10 + *s - '0';
		}
		else if (null_flag)
			break;
		s++;
	}

	if (sign < 0)
		total = (-total);

	return (total);
}

	/*int num = 0;
	int found_num = 0;
	int negative = 1;

	while (*s)
	{
		if (*s == '-')
			negative *= -1;
		if (*s >= '0' && *s <= '9')
		{
			num = num * 10 + *s - '0';
			found_num = 1;
		}
		else if (found_num)
		{
			break;
		}
		s++;
	}

	return (negative == -1 ? -num : num); */
