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

	mem = malloc(sizeof(char) * (size));
	if (!mem)
		return (NULL);
	while (*str)
	{
		*mem = *str;
		mem++;
		str++;
	}

	return (mem);
}

