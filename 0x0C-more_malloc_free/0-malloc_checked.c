#include "main.h"

/**
* malloc_checked - allocate memory using malloc
* @b: size of memory to be allocated
*
* Return: pointer to the memory
*/
void *malloc_checked(unsigned int b)
{
	void *k = malloc(b);

	if (!k)
		exit(98);
	return (k);
}

