#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	int i = 0;

	for (i = 0; i <=98; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
		putchar(' ');


	}
	return (0);
}

