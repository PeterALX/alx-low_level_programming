#include "main.h"

/**
 * read_textfile - reads a text file to stdout
 * @filename: name of the file to be read
 * @letters: number of letters to read
 *
 * Return: number of letters written.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	int count = 0;
	char *buf = malloc(sizeof(char) * letters);

	if (!buf)
		return (0);
	count = read(fd, buf, letters);
	write(STDOUT_FILENO, buf, count);
	free(buf);
	return (count);
}
