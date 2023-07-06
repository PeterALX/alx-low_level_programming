#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string representing the binary number
 * Return: the decimal representation of the binary number, 0 if
 * @b has a character that is not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;
	int len;

	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	i -= 1;
	len = i;
	while (i >= 0)
	{
		result += (b[len - i] - 48) * _pow(2, i);
		i--;
	}
	return (result);
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
