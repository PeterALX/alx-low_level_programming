#include "main.h"

/**
* print_rev - print a string in reverse
*
* Return: void
*/
void print_rev(char *s)
{
	int i;
	int len = _strlen(s);
	
	for (i = len - 1; i >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
