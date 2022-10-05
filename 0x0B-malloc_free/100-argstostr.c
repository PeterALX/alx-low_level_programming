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
	int i;
	int j = 1;

	if (!ac || !av)
		return (NULL);

	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			i++;
			size++;
		}
		j++;
	}

	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size)
	{
		str[i] = av[1][i];
		i++;
	}

	return (str);	
}

