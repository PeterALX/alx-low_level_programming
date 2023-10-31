#include <stdio.h>
/**
 * main - Finds and prints the first 98 Fibonacci numbers, starting,
 * with 1 and 2, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	long long unsigned int i = 1;
	long long unsigned int j = 1;
	long long unsigned int k = 2;
	int it;

	for (it = 0; it < 98; it++)
	{
		printf("%llu\n", i);
		i = j;
		j = k;
		k = i + j;
	}

	return (0);
}
