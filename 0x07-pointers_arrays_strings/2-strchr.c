#include "main.h"

/**
* strchr - locate a char in a string
* @s:  the string
* @c: the char to locate
* Return: a pointer to the found char, NULL if the pointer is not found 
*/
char *_strchr(char *s, char c)
{
	int i = 0;
	
	if (s[0] == c)
		return (s);
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}
	return (NULL);
}

