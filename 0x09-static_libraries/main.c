#include "main.h"

/**
* main - ent 
* 
* 
* Return: 
*/
int main(void)
{
	char k[25];
	printf("putchar(k): ");
	_putchar('k');
	_putchar('\n');
	printf("islower(N): %d\n", _islower('N'));
	printf("isalpha(3): %d\n", _isalpha('3'));
	printf("abs(-1): %d\n", _abs(-1));
	printf("isupper(N): %d\n", _isupper('N'));
	printf("isdigit not implemented yet: %d\n", _isdigit(3));
	printf("_strlen(\"oya\"): %d\n", _strlen("oya"));
	printf("_puts(\"oya\"): ");
	_puts("oya");
	printf("%s\n", _strcpy(k, "strcpy works!"));
	printf("atoi not implemented yet: %d\n", _atoi("3"));
	printf("strcat not implemented yet: %s\n", _strcat("strcat!", "foo"));
	printf("strncat not implemented yet: %s\n", _strncat("strncat!", "foo", 42));
	printf("strncpy not implemented yet: %s\n", _strncpy("strncpy!", "foo", 42));
	printf("strcmp not implemented yet: %d\n", _strcmp("3","4"));


	return (0);
}

