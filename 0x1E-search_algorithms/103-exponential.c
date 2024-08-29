#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int i, j, first = 0, last = size - 1;

	if (!value || array == NULL)
		return (-1);

	while (first <= last)
	{
		printf("Searching in array: ");
		for (i = first; i <= last; i++)
		{
			if (i == last)
				printf("%i\n", array[i]);
			else
				printf("%i, ", array[i]);
		}
		j = first + (last - first) / 2;
		if (array[j] == value)
			return (j);
		else if (value > array[j])
			first = j + 1;
		else if (value < array[j])
			last = j - 1;
	}
	return (-1);
}

/**
 * exponential_search - function that searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: Pointer to the first item in the array
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	int i = 1, j, r;

	if (!array)
		return (-1);

	while (i < (int)size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}

	printf("Value found between indexes [%d] and [%d]\n", i / 2,
			(i >= (int)size ? (int)size - 1 : i));

	if (i + 1 < (int)size)
		j = i + 1;
	else
		j = (int)size;

	i /= 2;

	r = binary_search(array + i, j - i, value);
	return (r < 0 ? -1 : r + i);
}
