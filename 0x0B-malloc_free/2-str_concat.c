#include "main.h"

/**
* str_concat - concatenates two strings 
* @s1: string 1
* @s2: string 2
* Return: pointer to the concatenated string
*/
char *str_concat(char *s1, char * s2)
{
	int size;
	char *str;

	size = 0;
	if (s1)
	{
		while (*s1)
		{
			size++;
			s1++;
		}
	}

	if (s2)
	{
		while (*s2)
		{
			size++;
			s2++;
		}
	}

	str = malloc(sizeof(char) * (size));

	if (!str)
		return (NULL);

	return (str);
}

