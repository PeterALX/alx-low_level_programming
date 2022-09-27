#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched
 * @needle: the substring
 * Return: a pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *startn = needle, *starth = haystack;

	while (*haystack)
	{
		starth = haystack;
		needle = startn;

		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == 0)
			return (haystack);
		haystack = starth + 1;
	}
	return (NULL);
}
