#include <stdio.h>

/**
* swap_int- swap the value of two integers
* @a: int 1
* @b: int 2
* Return: 0
*/
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
