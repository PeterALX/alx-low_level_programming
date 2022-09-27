#include "main.h"

/**
* print_chessboard - prints a chessboard
* @a: a pointer
* Return: void
*/
void print_chessboard(char (*a)[8])
{
	int i,j;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		i++;
	}
}

