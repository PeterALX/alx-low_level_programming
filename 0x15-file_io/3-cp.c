#include "main.h"
#include "stdlib.h"
#include "stdio.h"


void usage_error(void);
void read_error(char *filename);
/**
 * main - copy contents of a file into another file
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int from, to, r;
	char buffer[1024];

	if (argc != 3)
	{
		usage_error();
	}
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (from == -1)
	{
		read_error(argv[1]);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((r = read(from, buffer, 1024)) > 0)
	{
		if (write(to, buffer, r) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);

	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);

	}
	return (0);
}
void usage_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

void read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(99);
}

