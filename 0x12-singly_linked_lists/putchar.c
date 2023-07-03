#include <unistd.h>

/**
 * _putchar - writes a char to stdout
 * @c: the char to be written
 * Return: 1 on succes, -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
