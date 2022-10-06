#include "main.h"
/**
 * string_nconcat - concatenate two strings
 * @s1: string 1
 * @s2: string 2
 * @n: how many chars of n to concat
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size = 0, i, strcount = 0;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[size])
		size++;
	size += n + 1;
	str = malloc(sizeof(*str) * size);
	if (!str)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[strcount] = s1[i];
		strcount++;
		i++;
	}
	i = 0;
	while (s2[i] && i < n)
	{
		str[strcount] = s2[i];
		strcount++;
		i++;
	}
	str[strcount] = '\0';
	return (str);
}
