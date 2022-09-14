#include "main.h"

/**
* times_table - print the times table
*
* Return: void 
*/
void times_table(void)
{
	int i,j,k;

	for (i = 0; i <=9; i++)
	{
		for(j = 0; j <= 9; j++)
		{
			k = i * j;
			
			if(i == 0 || j == 0)
			{
				_putchar('0');
				if (j ==9 )
					continue;
				_putchar(',');
				if(i == 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
			}
			else if (k/10 == 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
				if(j == 9)
					continue;
				_putchar(',');
			}
			else
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				if(j == 9)
					continue;
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

