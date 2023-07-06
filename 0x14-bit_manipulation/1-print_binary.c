#include "main.h"

void print_binary(unsigned long int n)
{
	int width;
	unsigned long int i = 1;

	width = 0;
	while (i < n)
	{
		width += 1;
		i = _pow(2, width) + i;
	}
	/* width++; */
	while (width >= 0)
	{
		if ((unsigned int)_pow(2,width) <= n)
		{
			_putchar('1');
			n -= _pow(2, width);
		}
		else 
		{
			_putchar('0');
		}
		width--;
	}
}
