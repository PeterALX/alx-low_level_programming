#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - finds the minimum coins to give a particular amount of change
 * @argc: number of command line args
 * @argv: array of command line args
 * Return:always zero
 */
int main(int argc, char *argv[])
{
	int balance;
	int coins_given = 0;
	int denominations[] = {25, 10, 5, 2, 1};
	int i = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	balance = atoi(argv[1]);
	for (i = 0; i < (int)(sizeof(denominations) / sizeof(denominations[0])); i++)
	{
		if (balance == 0)
			break;
		if (balance / denominations[i] == 0)
			continue;
		coins_given += balance / denominations[i];
		balance %= denominations[i];
	}

	printf("%d\n", coins_given);
	return (0);
}
