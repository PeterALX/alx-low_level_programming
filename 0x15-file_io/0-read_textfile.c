#include "main.h"

/**
* read_textfile - read a text file and print int to POSIX standard output
* @filename: the name of the file to be read
* @letters: the number of letters to be read
* Return: the number of letters read
*/
size_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY, 0);
	size_t char_count;
	char c;

	if (!filename || fd == -1)
		return (0);

	char_count = 0;
	while (char_count < letters)
	{
		if (read(fd, &c, 1) != 1)
			break;
		write(1, &c, 1);
		char_count++;
	}
	close(fd);
	return (char_count);
}
