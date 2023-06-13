#include "main.h"

char *_strdup(char *str)
{
	int len = 0;
	char *stringcopy;

	if (!str)
		return (NULL);
	
	while (str[len])
		len++;
	len += 1;

	stringcopy = malloc(sizeof(char) * len);
	if (!stringcopy)
		return (NULL);

	while (len >= 0)
	{
		stringcopy[len] = str[len];
		len--;
	}
	return (stringcopy);
}
