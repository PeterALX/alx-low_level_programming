#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination
 * @src: string to be copied
 * @n: at most number of bytes from src to be copied
 *
 * Return: pointer to the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
