#include "main.h"

/**
* array_range - creates an array of ints
* @min: range from here
* @max:range to here
* Return: pointer to the array
*/
int *array_range(int min, int max)
{
	int size;
	int i = 0;
	int *arr;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);

	while (i < size)
	{
		arr[i] = i + min;
		i++;
	}
	return (arr);
}

