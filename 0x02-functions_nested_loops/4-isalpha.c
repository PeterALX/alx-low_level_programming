#include "main.h"

/**
 * _isalpha - check the code.
 * @c: an input character.
 * Return: 0 or 1.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
