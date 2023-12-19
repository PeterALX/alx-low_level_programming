#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

void close_descriptors(int from, int to);

/**
 * main - entry point into my sweet program
 * @ac: number of commandline args
 * @av: the commandline args
 *
 * Return: 0 on success, appropriate errno on fail.
 */
int main(int ac, char **av)
{
	int file_from, file_to;
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
		close_descriptors(file_from, 0);
		exit(99);
	}
	do {
		rcount = read(file_from, buf, 1024);
		if (rcount < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			close_descriptors(file_from, file_to);
			exit(98);
		}
		wcount = write(file_to, buf, rcount);
		if (wcount < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			close_descriptors(file_from, file_to);
			exit(99);
		}
	} while (rcount > 0);
	close_descriptors(file_from, file_to);
	return (0);
}

/**
 * close_descriptors - closes two file descriptors passed to it
 * @from: first descriptor
 * @to: second descriptor
 *
 * Return: eternal blackness(void) forgive my silly jokes
 *
 * Description: pass 0 if no descriptor to close
 */
void close_descriptors(int from, int to)
{
	if (from > 0)
	{
		if (close(from) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
			exit(100);
		}
	}
	if (to > 0)
	{
		if (close(to) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
			exit(100);
		}
	}
}
