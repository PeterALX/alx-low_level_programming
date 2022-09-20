#include "main.h"

/**
* print_array - print n elements of an array
* @a: the array to be printed
* @n: the number of elements to be printed
* Return: void
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
