#include "search_algos.h"

/**
 * advanced_binary_recursive - advanced binary search implementation
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value we are searching for
 * Return: -1 if value is not present in array or if array is NULL
 */
int advanced_binary_recursive(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (advanced_binary_recursive(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (advanced_binary_recursive(array, half + 1, value));

	half++;
	return (advanced_binary_recursive(array + half, size - half, value) + half);
}

/**
 * advanced_binary - prepare the terrain to advanced binary search
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	int i;

	i = advanced_binary_recursive(array, size, value);

	if (i >= 0 && array[i] != value)
		return (-1);

	return (i);
}
