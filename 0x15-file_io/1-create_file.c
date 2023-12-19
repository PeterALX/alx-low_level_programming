#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - creates a text file
 * @filename: name of the file to be created
 * @text_content: text to write to the file
 *
 * Return: 1 on success, -1 on fail.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (*text_content)
		{
			write(fd, text_content, 1);
			text_content++;
		}
	}
	return (1);
}
