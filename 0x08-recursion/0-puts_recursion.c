#include "main.h"

/**
 * _puts_recursion - a fuction that prints a string, followed by a new line.
 * @s: an input string to printing.
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
