#include "main.h"
/**
* argstostr - concatenate all arguments to the program 
* @ac: argument count
* @av: array of arguments
* Return: pointer to the concatenated string
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int size = 0;
	int i = 0;
	int j;
	int strcount;

	if (!ac || !av)
		return (NULL);

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			size++;
		}
		size++; /*each arg requires space for an additional char, newline*/
		i++;
	}

	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);

	strcount = 0;
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			str[strcount] = av[i][j];
			j++;
			strcount++;
		}
		str[strcount] = '\n';
		strcount++;
		i++;
	}
	str[strcount] = '\0';
	return (str);
}

