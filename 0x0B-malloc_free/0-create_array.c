#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with char c
 * @size: the size of the array
 * @c: the char to initialize the array with
 * Return: the allocated array, NULL if fails or if size == 0
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (!array)
		return (NULL);

	i = 0;
	while (i < (int)size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
