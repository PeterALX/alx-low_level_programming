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
		printf("%s\n","Error");
		return 1;
	}
	printf("%d\n",(*argv[1] - 48) * (*argv[2] - 48));
	return (0);
}

