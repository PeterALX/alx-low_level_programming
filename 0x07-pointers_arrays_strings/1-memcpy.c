#include "main.h"

/**
* _memcpy - Entry point
* @dest:
* @src:
* @n:
* Return: pointer
*/
char *memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
	}
	return (0);
}
