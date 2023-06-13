#include "main.h"
#include <stdio.h>

/**
 * argstostr - concatenates the arguments of your program
 * @ac: argument count
 * @av: an array of the arguments
 * Return: pointer to the concatenated string, NULL if fail
 */
char *argstostr(int ac, char **av)
{
	char *string_new;
	int len = 0;
	int k;
	int i;
	int j;

	if (!ac || !av)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		i++;
	}
	string_new = malloc(sizeof(char) * (len + ac + 1));
	if (!string_new)
		return (NULL);
	i = 0;
	k = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			string_new[k] = av[i][j];
			k++;
			j++;
		}
		string_new[k] = '\n';
		k++;
		i++;
	}
	string_new[k] = '\0';
	return (string_new);
}
