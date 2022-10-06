#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *concat = string_nconcat("Best ", "School !!!", 6);
	printf("%s\n",concat);
	return (0);
}
