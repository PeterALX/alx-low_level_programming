#include "main.h"
#include <stdio.h>

int main(void)
{
	char str1[] = "deez";
	char str2[] = "abcde";
	// char *str3 = "";
	rev_string(str1);
	rev_string(str2);
	printf("%s\n%s\n", str1,str2);
	return (0);
}
