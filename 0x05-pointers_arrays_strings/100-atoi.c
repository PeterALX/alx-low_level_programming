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
		// else if (*s != '-' && *s != '+' && *s != ' ')
		// {
		// 	negative = 1;
		// }
		s++;
	}

	return (negative == -1 ? -num : num);
}
