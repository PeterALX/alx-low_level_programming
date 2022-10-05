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
		i++;
	}

	str = malloc(sizeof(char) * (size + 1));
	if (!str)
		return (NULL);

	strcount = 0;
	while (strcount < size)
	{
		str[strcount] = 'k';
		strcount++;
	}
	return (str);
}

