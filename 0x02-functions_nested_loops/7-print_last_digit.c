#include <stdio.h>

/**
* print_last_digit - print last digit of a number
* @k: the number
* Return: the last digit
*/
int print_last_digit(int k)
{
	int m;

	if(k < 0)
		m = (k % 10) * -1;
	else
		m = k % 10;
	return ((m % 10) + '0');
}

