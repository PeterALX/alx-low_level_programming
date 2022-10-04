#include "main.h"

/**
* strdup - allocate some memory and copy a string into it
* @str: the string to be copied
*
* Return: a pointer to the memory
*/
char *_strdup(char *str)
{
	int size;
	char *mem;
	
	if (!str)
		return (NULL);

	size = 0;
	while (str[size])
		size++;

	mem = malloc(sizeof(char) * (size + 1));
	if (!mem)
		return (NULL);

	return (mem);
}

