#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * of integers using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: ithe value to search for
 * Return: -1 if value is not present in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	/* search space is array[low…high] */
	size_t low = 0, high = (size - 1), pos;

	if (!array)
		return (-1);

	while (low <= high)
	{
		/* estimate the mid/probe position */
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
					 (value - array[low]));

		if (pos > high)
		{
			printf("Value checked array[%lu] is out of range\n",
				   pos);
			return (-1);
		}

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		/* target value is found */
		if (array[pos] == value)
			return (pos);
		/**
		 * discard all elements in the left search space,
		 * including the posdle element
		 */
		if (array[pos] < value)
			low = pos + 1;
		/**
		 * discard all elements in the right search space,
		 * including the posdle element
		 */
		else
			high = pos - 1;
	}
	return (-1);
}
