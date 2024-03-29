#include "main.h"

/**
 * print_sign - check if no is 0, greater than 0 or less than 0.
 * @n: an input integer.
 * Return: -1, 0 or 1.
 */
int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		i = 0;
		_putchar('0');
	}
	else
	{
		i = -1;
		_putchar('-');
	}
	return (i);
}
