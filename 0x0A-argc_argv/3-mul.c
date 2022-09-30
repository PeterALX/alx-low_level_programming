#include "main.h"

/**
* main - Entry point
* @argc: number of arguments
* @argv: array of arguments
* Return: 0
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

