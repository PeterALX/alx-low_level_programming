#include "main.h"

/**
* _pow_recursion - returns value of x raised to the power of y
* @x: x
* @y: y
* Return: x power y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, --y));
}

