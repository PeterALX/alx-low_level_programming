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
	void *newptr;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
	{
		newptr = malloc(newsize);
	}
}

