#include <stdio.h>
/**
* main - entry point, print name of file it was compiled from
*
* Return: 0
*/
int main(void)
{
	printf(__BASE_FILE__"\n");
	return (0);
}
