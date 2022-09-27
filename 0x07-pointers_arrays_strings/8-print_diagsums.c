#include "main.h"

/**
 * print_diagsums - prints the sum of 2 diagonals
 * of a square matrix of integers.
 * @a: the square matrix
 * @size: dimensions of the matrix.
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, totalsize = size * size, sum1 = 0, sum2 = 0;

	for (i = 0; i < totalsize; i += size + 1)
		sum1 += a[i];
	for (i = size - 1; i < totalsize; i += size - 1)
		sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}
