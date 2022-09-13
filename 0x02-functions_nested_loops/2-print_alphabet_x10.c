#include "main.h"

/**
* print_alphabet_x10- print the alphabet 10 times
*
* Return: 0
*/
void print_alphabet_x10(void)
{
	int i = 0;
	int j = 97;

	while(i < 10)
	{
		j = 97;
		while(j < 123)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++
	}
}

