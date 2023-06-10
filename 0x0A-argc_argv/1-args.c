#include <stdio.h>

/**
 * main - Entry point into the program
 * @argc: number of command line arguments, unused
 * @argv: command line args
 * Return: zero
 */
int main(int  argc, char __attribute__((__unused__))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
