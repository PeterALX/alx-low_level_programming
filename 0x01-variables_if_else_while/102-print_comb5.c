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
			a = j;
			while (a <= 57)
			{
				b = a + 1;
				while (b <= 57)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(a);
					putchar(b);
					if (a != 57 || b != 57)
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

