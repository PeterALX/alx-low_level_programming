#include "main.h"

/**
* create_array - create an array of char and init it with specific char 
* @size: size of array
* @c: the char to init array with
* 
* Return: pointer to the created array
*/
char *create_array(unsigned int size, char c)
{
	char *arr = malloc(sizeof(char) * (size + 1));
	unsigned int i = 0;

	if (size == 0) return (NULL);
	while(i < size)
	{
		arr[i] = c;
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

