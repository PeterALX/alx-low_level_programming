#include "main.h"

/**
 * print_to_98 - print numbers
 *
 * Return: void
 */
void print_to_98(int n)
{
	if ( n < 98)
	{

		while (n <= 98)
		{
			_putchar('n');
			n++;
		}
	}
	else
	{

		while (n >= 98)
		{
			_putchar('n');
			n--;
		}
	}
}

