#include "search_algos.h"

/**
 * linear_search - linear search an array
 * @array: the array to search
 * @size: The size of the array
 * Return: the first index where the array is found, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
			return (i);
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
	}

	return (-1);
}
