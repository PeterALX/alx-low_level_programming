#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file to be appended to
 * @text_content: text to append to the file
 *
 * Return: 1 on success, -1 on fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
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
