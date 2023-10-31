#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int h;
	int i;

	h = 0;
	while (h < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		h++;
		_putchar('\n');
	}
}
