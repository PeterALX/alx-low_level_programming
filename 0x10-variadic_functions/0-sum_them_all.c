#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all arguments passed to it
 * @n: the number of arguments to sum
 * Return: sum of the arguments passed to it, 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i;
	int sum;

	if (n == 0)
		return (0);

	va_start(ap, n);
	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += va_arg(ap, int);
		i++;

	}
	return (sum);
}
