#include "main.h"

/**
* create_file - creates a file
* @filename: name of the file to be created
* @text_content: string to write to the file
* Return: 1 if success, -1 if failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int len = 0;
	int char_count;

	if (!filename)
		return (-1);
	if (text_content)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	char_count =  write(fd, text_content, len);

	if (fd == -1 || char_count == -1)
		return (-1);

	close(fd);
	return (1);

}
