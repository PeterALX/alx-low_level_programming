#include <unistd.h>
/**
 * _putchar - writes a char to stdout
 * @c: the char
 * Return: 1 on success, -1 on fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
