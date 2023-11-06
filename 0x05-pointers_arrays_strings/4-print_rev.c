#include "main.h"
#include <stdio.h>

/**
* print_rev - print a string in reverse
* @s: the string
* Return: void
*/
void print_rev(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
