#include <stdio.h>
/**
 * main - Finds and prints the first 98 Fibonacci numbers, starting,
 * with 1 and 2, followed by a new line.
 *
 * Return: 0
 */

int main(void)
{
	unsigned long  int i = 1;
	unsigned long int j = 1;
	unsigned long int k = 2;
	int it;

	for (it = 0; it < 98; it++)
	{
		printf("%lu", i);
		if (it != 97)
			printf(", ");
		i = j;
		j = k;
		k = i + j;
	}

	return (0);
}
