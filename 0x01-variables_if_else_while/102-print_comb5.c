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
	int a = 48;
	int b = 48;

	while (i <= 57)
	{
		j = 48;
		while (j <= 57)
		{
			a = i;
			while (a <= 57)
			{
				b = j + 1;
				while (b <= 57)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(a);
					putchar(b);
					if (i != 57 || j != 56 || a != 57 || b != 57)
					{
						putchar(',');
						putchar(' ');
					}
					b++;
				}
			a++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}

