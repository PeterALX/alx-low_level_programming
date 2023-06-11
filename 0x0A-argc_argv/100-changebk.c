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

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	balance = atoi(argv[1]);
	while (balance > 0)
	{
		if (balance / 25 > 0)
		{
			coins_given += balance / 25;
			balance %= 25;
		}
		else if (balance / 10 > 0)
		{
			coins_given += balance / 10;
			balance %= 10;
		}
		else if (balance / 5 > 0)
		{
			coins_given += balance / 5;
			balance %= 5;
		}
		else if (balance / 2 > 0)
		{
			coins_given += balance / 2;
			balance %= 2;
		}
		else
		{
			coins_given += balance;
			balance = 0;
		}
	}
	printf("%d\n", coins_given);
	return (0);
}
