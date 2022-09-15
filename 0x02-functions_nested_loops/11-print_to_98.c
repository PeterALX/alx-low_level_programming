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
			if ( n < 0)
			{
				_putchar('-');
				n = n * -1;
				if (n/10 ==0)
				{
					_putchar(n + '0');
				}
				else
				{
					_putchar((n/10) + '0');
					_putchar((n % 10) + '0');
				}
			}
			_putchar(n + '0');
			_putchar(n + '0');
			n++;
		}
	}
	else
	{

		while (n >= 98)
		{
			_putchar(n + '0');
			n--;
		}
	}
}

