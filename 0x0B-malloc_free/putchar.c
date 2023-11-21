#include "main.h"
#include <unistd.h>

/**
 * _putchar- writes a char to stdout
 * @c: the char
 * Return: the return value of write() (man 2 write)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
