#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	char n = '0';

	while (n <= '9')
	{
		putchar(n);
		putchar(',');
		putchar(' ');

		n++;
	}
	putchar('\n');
	return (0);
}

