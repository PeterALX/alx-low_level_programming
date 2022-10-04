#include <stdio.h>



/**

* *_memset - fill the first n bytes of memory pointed by swith b

* @s: the pointer to memory

* @b: the content the buffer is to be filled with

* @n: the number of times b will be written

* Return: 0

*/

char *_memset(char *s, char b, unsigned int n)

{

unsigned int i = 0;



while (i < n)

{

s[i] = b;

i++;

}



return (s);

}
