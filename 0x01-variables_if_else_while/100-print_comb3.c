#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int i = 48;
	int j = 48;

	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			putchar(i);
			putchar(j);
			if (i != 57 && j != 57)
			{
				putchar(',');
				putchar(' ');
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

