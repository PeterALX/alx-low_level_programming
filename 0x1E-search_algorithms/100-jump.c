#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array of
 * integers using the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jump_step = sqrt(size), prev = 0, i = 0, j;

	if (!array || !size)
		return (-1);

	while (i < size)
	{
		if (array[i] >= value)
			break;
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i += jump_step;
	}

	prev = i - jump_step;
	printf("Value found between indexes [%lu] and [%lu]\n", prev, i);

	for (j = prev ; j < size ; j++)
	{
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
