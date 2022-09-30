#include "main.h"

/**
* main - Entry point
* @argc: number of arguments
* @argv: array of arguments
* Return: 0
*/
int main(int argc, char **argv)
{
	int coinCount = 0;
	int i = 0;
	int coinOptions[5] = {25, 10, 5, 2, 1};
	int amount;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	amount = atoi(argv[1]);
	if (amount < 0)
	{
		printf("0\n");
		return (0);
	}

	while (i < 5)
	{
		if (coinOptions[i] > amount)
		{
			i++;
			continue;
		}
		coinCount += amount / coinOptions[i];
		amount %= coinOptions[i];
		i++;
	}
	printf("%d\n", coinCount);
	return (0);
}

