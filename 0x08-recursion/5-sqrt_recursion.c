#include "main.h"
int _sqrt(int prev, int n);


/**
* _sqrt_recursion - returns the square root of a number
* @n: the number to be asquare rooted
* Return: the square root of n
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);

	return (_sqrt(n/2,n));
}

int _sqrt(int prev, int n)
{
	if (prev < 0)
		return (-1);
	if (prev * prev == n)
		return (prev);
	return (_sqrt(prev - 1, n));
}
