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
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	else 
	{
		while (i < argc)
		{
			if(isdigit(*argv[i]))
			{
				sum += atoi(argv[i]);
				i++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n",sum);
	}
	return (0);
}
