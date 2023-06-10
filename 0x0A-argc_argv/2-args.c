#include <stdio.h>

/**
 * main - Entry point into the program
 * @argc: number of command line arguments, unused
 * @argv: command line args
 * Return: zero
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	while (*argv)
	{
		printf("%s\n", *argv);
		argv++;
	}
	return (0);
}
