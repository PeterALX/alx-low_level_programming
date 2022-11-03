#ifndef _FILE_IO_H_
#define _FILE_IO_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);
void _putchar(char);

#endif
