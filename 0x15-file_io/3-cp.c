#include "main.h"
#include "stdlib.h"
#include "stdio.h"

/**
 * main - copy contents of a file into another file
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from;
	int to;
	char buffer[1024];
	int r;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(98);
	}
	while ((r = read(from, buffer, 1024)) > 0)
	{
		write(to, buffer, r);

	}
	return (0);
}
