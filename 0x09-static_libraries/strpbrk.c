#include "main.h"

#include <stdio.h>



/**

 * _strpbrk - searches string for any of a set of bytes.

 * @s: the string to be searched

 * @accept: pointer to the set of bytes to be searched

 * Return: a pointer to the  byte in s that matches one of the bytes in accept,

 * or NULL if no such byte is found.

 */



char *_strpbrk(char *s, char *accept)

{



	char *p = accept;







	while (*s)



	{



		while (*accept)



		{



			if (*accept == *s)



				return (s);



			accept++;



		}







		accept = p;



		s++;



	}



	return (NULL);



}
