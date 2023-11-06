#include "main.h"

/**
 * rev_string - check the code.
 * @s: an input string.
 * Return: void
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char tmp;

	while (s[len])
		len++;

	while (i < --len)
	{
		tmp = s[len];
		s[len] = s[i];
		s[i++] = tmp;
	}
}
