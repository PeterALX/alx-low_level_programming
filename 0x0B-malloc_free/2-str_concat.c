#include "main.h"

/**
 * str_concat - concatenates two strings and returns the concatenated
 * @s1: string1
 * @s2: string2
 * Return: pointer to the concatenated string, NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str_new;
	int len1 = 0;
	int len2 = 0;
	int i;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	if (s1)
	{
		while (s1[len1])
			len1++;
	}
	if (s2)
	{
		while (s2[len2])
			len2++;
	}

	str_new = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!str_new)
		return (NULL);

	i = 0;
	while (s1[i])
	{
		str_new[i] = s1[i];
			i++;
	}
	i = len1;
	while (s2[i - len1])
	{
		str_new[i] = s2[i - len1];
		i++;
	}

	return (str_new);
}
