#include <stdio.h>

/**
* main - Entry point
*
* Return: 0
*/
int main(void)
{
	char n = 'A';
	while (n <= 'z')
	{
		if (n <= 'Z' || n >= 'a')
		{
			putchar(n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}

