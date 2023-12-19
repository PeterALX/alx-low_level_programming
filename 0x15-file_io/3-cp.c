#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
int main(int ac, char **av)
{
	int file_from, file_to, from_close, to_close;
	ssize_t rcount, wcount;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	};

	file_from = open(av[1], O_RDONLY);
	if (file_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(file_from); //add check
		exit(99);
	}

	do {
		rcount = read(file_from, buf, 1024);
		if (rcount < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			close(file_from); //check these bad boys
			close(file_to);
			exit(98);
		}
		wcount = write(file_to, buf, rcount );
		if (wcount < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close(file_from); //check these bad boys
			close(file_to);
			exit(99);
		}
	} while (rcount > 0);

	close(file_from); //check these bad boys
	close(file_to);
	return (0);
}

