#include "main.h"

/**
 * print_triangle - check the code.
 * @size: an input integer.
 * Return: 0.
 */
void print_triangle(int size)
{
	int i = 0, d, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (d = 0; d < size; d++)
			{
				if  (d < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
