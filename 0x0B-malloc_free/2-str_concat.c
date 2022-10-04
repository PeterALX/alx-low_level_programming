#include "main.h"

/**
* str_concat - concatenates two strings
* @s1: string 1
* @s2: string 2
* Return: pointer to the concatenated string
*/
char *str_concat(char *s1, char *s2)
{
	int size;
	char *str;
	char *j = s1;
	char *k = s2;
	int i = 0;
	int m = 0;

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

	str = malloc(sizeof(char) * (size + 1));

	if (!str)
		return (NULL);

	if (j)
	{
		while (j[i])
		{
			str[i] = j[i];
			i++;
			m++;
		}
		i = 0;
	}

	if (k)
	{

		while (k[i])
		{
			str[m + i] = k[i];
			i++;
		}
		i = 0;
	}
	return (str);
}

