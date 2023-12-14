#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
		printf("t_%s\n", tab[i]);
}

/**
 * free_strarr - frees an array of strings
 * @strarr: the array of strings to be freed
 * Return: 1 is success, 0 if fail
 */
void free_strarr(char **strarr)
{
	while (*strarr)
	{
		free(*strarr);
		strarr++;
	}
}

/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
	char **tab;

	int i = 0;
	while (i < 10000)
	{
		tab = strtow("deez balls fr fr no cappin");
		free_strarr(tab);
		tab = NULL;
	}

	tab = strtow("deez balls fr fr no cappin");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
