
#include "main.h"

/**
 * clear_bit - clears the value of a bit to 1 at a given index
 * @n: the number whose bit is to be clear
 * @index: the index of the bit to be clear
 * Return: 1 on success, 0 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int width;
	unsigned long int i = 1;
	unsigned long int result = *n;

	width = 0;
	while (i < result)
	{
		width += 1;
		i = _pow(2, width) + i;
	}
	if (index > (unsigned int)width)
	{
		return (1);
	}
	while (width >= 0)
	{
		if ((unsigned int)_pow(2, width) <= result)
		{
			result -= _pow(2, width);
			if (width  == (int)index)
			{
				*n -= _pow(2, width);
				return (1);
			}
		}
		else
		{
		}
		width--;
	}
	return (1);
}

/**
 * _pow - returns x raised to the power of y
 * @x: x
 * @y: y
 * Return: x raised to the power of y
 */
int _pow(int x, int y)
{
	int result = 1;

	while (y > 0)
	{
		result *= x;
		y--;
	}
	return (result);
}
