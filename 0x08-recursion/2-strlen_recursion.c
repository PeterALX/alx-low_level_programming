#include "main.h"

/**
* _strlen_recursion - return the length of a string
* @s: pointer to the string
* Return: void
*/
int _strlen_recursion(char *s)
{
	int i = 1;

	if (!*s)
		return (0);
	return (i + _strlen_recursion(++s));
}
