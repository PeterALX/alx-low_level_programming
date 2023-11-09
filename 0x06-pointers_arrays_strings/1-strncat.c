#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination string
 * @src: string to be appended on to dest
 * @n: at most number of bytes from src to be appended
 *
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *tmp = dest;
	int i = 0;

	while (*tmp)
		tmp++;

	while (i < n && src[i])
	{
		*tmp++ = src[i];
		i++;
	}

	return (dest);
}
