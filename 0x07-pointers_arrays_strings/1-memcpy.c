#include "main.h"

/**
* _memcpy - Entry point
* @dest: the destination buffer
* @src: the source buffer
* @n: the number of times to copy
* Return: pointer
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
