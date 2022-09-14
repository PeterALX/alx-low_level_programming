#include "main.h"

/**
* jack_bauer - print every minute of the day
*
* Return: void
*/
void jack_bauer(void)
{
	int j = 0;
	int k = 0;

	while (j < 24)
	{
		k = 0;
		while (k < 60)
		{
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');
			putchar(':');
			putchar((k / 10) + '0');
			putchar((k % 10) + '0');
			putchar('\n');
			k++;
		}
		j++;
	}
}

