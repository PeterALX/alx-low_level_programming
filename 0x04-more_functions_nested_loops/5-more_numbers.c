#include "main.h"

/**
 * more_numbers - check the code.
 *
 * Return: 0.
 */
void more_numbers(void)
{
	int i, d = 0;

	for (; d < 10; d++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}

