#include "main.h"
#include <stddef.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	char k;
	int fd;
	size_t len = 0;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);


	while (read(fd, &k, 1) == 1 && len < letters)
	{
		if (write(STDOUT_FILENO, &k, 1) != 1)
			return (0);
		len++;
	}
	return (len);
}
