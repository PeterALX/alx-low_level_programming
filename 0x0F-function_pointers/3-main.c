#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point to the program
 * @argc: number of arguments to the program
 * @argv: array of the arguments to the program 
 * Return: exits with a status code on fail, return 0 otherwise
 */
int main(int argc, char **argv)
{
	int op1, op2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(argv[2], "+") && strcmp(argv[2], "-") && strcmp(argv[2], "*") &&
			strcmp(argv[2], "/") && strcmp(argv[2], "%"))
	{
		printf("Error\n");
		exit(99);
	}

	op1 = atoi(argv[1]);
	op2 = atoi(argv[3]);

	if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && op2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(argv[2])(op1, op2));

	return (0);
}
