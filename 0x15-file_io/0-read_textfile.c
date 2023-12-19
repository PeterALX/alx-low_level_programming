#include "main.h"
#include <sys/types.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file to stdout
 * @filename: name of the file to be read
 * @letters: number of letters to read
 *
 * Return: number of letters written.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rcount, wcount = 0;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	rcount = read(fd, buf, letters);
	wcount = write(STDOUT_FILENO, buf, rcount);


	if (rcount < 0 || wcount < 1 || wcount != rcount)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (wcount);
}
