#include "main.h"

/**
* main - entry point
* Return: 0
*/
int main(int argc, char **argv)
{
	while (*argv[0])
	{
		_putchar(*argv[0]);
		(*argv)++;
	}
	_putchar('\n');
	return (0);
}

