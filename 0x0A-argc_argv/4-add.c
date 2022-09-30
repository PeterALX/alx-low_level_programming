#include "main.h"
#include <ctype.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i = 1;
	int j;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		while (i < argc)
		{

			for (j = 0; argv[i][j]; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
			i++;
		}

		printf("%d\n", sum);
	}


	return (0);
}
