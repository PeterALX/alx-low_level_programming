#ifndef __MALLOC__
#define __MALLOC__

#include <stdlib.h>

char *create_array(unsigned int size, char c);
int _putchar(char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
char **strtow(char *str);
#define UNUSED(x) __attribute__((__unused__)) x 
#endif
