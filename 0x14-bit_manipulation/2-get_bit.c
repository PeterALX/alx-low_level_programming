#include "main.h"

/**
 * get_bit - returns the bit at a given index in a decimal number
 * @n: the decimal number
 * @index: the index of the bit to be returned
 * Return: the bit vallue
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int width;
	unsigned long int i = 1;
	int val = 0;

	width = 0;
	while (i < n)
	{
		width += 1;
		i = _pow(2, width) + i;
	}
	if (index > (unsigned int)width)
		return (-1);
	while (width >= 0)
	{
		if ((unsigned int)_pow(2, width) <= n)
		{
			val = 1;
			n -= _pow(2, width);
		}
		else
		{
			val = 0;
		}
		if (width  == (int)index)
		{
			return (val);
		}
		width--;
	}
	return (val);

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
