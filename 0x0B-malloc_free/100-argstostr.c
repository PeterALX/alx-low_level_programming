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
	int i = 1;
	int j;

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
		i++;
	}

	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);

	i = 1;
	while (i < ac)
	{
		j = 0;
		str[i] = av[i][0];
		i++;
	}
	str[i] = '\0';
	return (str);
}

