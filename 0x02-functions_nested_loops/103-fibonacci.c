#include <stdio.h>

/**
 * main - do stuff.
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long  int i = 0;
	unsigned long int j = 1;
	unsigned long int k = 1;
	int it;
	int sum = 0;

	for (it = 0; it < 50; it++)
	{
		if (i == 4000000)
			break;
		if (i % 2 == 0)
			sum += i;
		i = j;
		j = k;
		k = i + j;
	}
	printf("%d\n", sum);
	return (0);
}
