#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Entry point
* 
* Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d and is\n",n,n % 10);
	return (0);
}

