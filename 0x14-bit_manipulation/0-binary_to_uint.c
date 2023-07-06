#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;
	int len;
	if (!b)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		i++;
	}
	i -= 1;
	len = i;
	while (i >= 0)
	{
		result += (b[len - i] - 48) * _pow(2, i);
		i--;
	}
	return (result);
}
