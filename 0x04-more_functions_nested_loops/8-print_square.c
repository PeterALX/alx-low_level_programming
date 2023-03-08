#include "main.h"

/**
 * print_square - check the code.
 * @size: an input integer.
 * Return: 0.
 */
void print_square(int size)
{
	int i, j;
	char c = '#';

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			_putchar(c);
			for (j = 2; j <= size; j++)
			{
				_putchar(c);
			}
			_putchar('\n');
		}
	}
}
