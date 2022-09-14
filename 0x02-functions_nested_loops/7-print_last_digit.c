#include <stdio.h>

/**
* print_last_digit - print last digit of a number
* @k: the number
* Return: the last digit
*/
int print_last_digit(int k)
{
	int l = k % 10;

	return (l + l * 10);
}

