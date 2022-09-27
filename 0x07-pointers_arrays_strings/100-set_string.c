#include "main.h"

/**
* set_string - sets the vale of a pointer to a char
* @s: the address of the pointer to be set
* @to: what to set s to
* Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;	
}

