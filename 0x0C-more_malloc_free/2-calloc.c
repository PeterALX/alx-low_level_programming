#include "main.h"

/**
* _calloc - allocate memory using malloc
* @nmemb: number of elements
* @size: size of each element
* Return: pointer to the memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	k = malloc(size * nmemb); 
	if (!k)
		return (NULL);
	return (k);
}
