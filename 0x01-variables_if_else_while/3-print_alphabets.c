#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	char n = 'z';

	while (n >= 'A')
	{
		if (n <= 'Z' || n >= 'a')
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}

