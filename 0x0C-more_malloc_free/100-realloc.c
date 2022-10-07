#include "main.h"

/**
* realloc - reallocate a memory block using malloc
* @ptr: the memory to be reallocated
* @old_size: the old size of the memory
* @new_size: the new size of the memory
* Return: pointer to the memory
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		newptr = malloc(new_size);
		if (!newptr)
			return (NULL);
		return (newptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	newptr = malloc(new_size);
	if(!newptr)
		return (NULL);
	i = 0;
	while (i < old_size)
	{
		newptr[i] = ((char*)ptr)[i];
		i++;
	}
	free(ptr);
	return (newptr);

}

