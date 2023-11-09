#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: string to be appended on to dest
 *
 * Return: pointer to the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *tmp = dest;

	while (*tmp)
		tmp++;

	while (*src)
	{
		*tmp++ = *src++;
	}

	return (dest);
}
