#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: the string to be converted
 * Return: the integer
 */
int _atoi(char *s)
{
	int num = 0;
	int found_num = 0;
	int is_negative = 0;

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
		{
			if (*(s - 1) == '-')
			{
				is_negative = 1;
			}
			num = num * 10 + *s - '0';
			found_num = 1;
		}
		else if (found_num)
		{
			break;
		}
		s++;
	}

	return (is_negative ? -num : num);
}
