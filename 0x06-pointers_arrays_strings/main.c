#include "main.h"
#include <stdio.h>

int main(void)
{
	char foo[98] = "foo ";
	char bar[98] = "bar";

	_strcat(foo, bar);
	printf("%s\n", foo);

	return (0);
}
