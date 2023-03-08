#include "main.h"

/**
 * print_diagonal - check the code.
 * @n: an input integer.
 * Return: 0.
 */
void print_diagonal(int n)
{
	int i = 0, d;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (d = 0; d < i; d++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
