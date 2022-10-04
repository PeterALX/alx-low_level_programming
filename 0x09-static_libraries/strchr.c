#include "main.h"



/**

* _strchr - locate a char in a string

* @s:  the string

* @c: the char to locate

* Return: a pointer to the found char, NULL if the pointer is not found

*/

char *_strchr(char *s, char c)

{

while (*s)

{

if (c == *s)

return (s);

s++;

}

if (c == *s)

return (s);

return (NULL);

}
