#include "main.h"

/**
 * string_toupper - check the code.
 * @s: an input string.
 * Return: char pointer to converted string.
 */
char *string_toupper(char *s)
{
	char *c = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (c);
}
