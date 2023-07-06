#include "main.h"

int get_bit(unsigned long int n, unsigned int index)
{
	int width;
	unsigned long int i = 1;
	int val = 0;

	width = 0;
	while (i < n)
	{
		width += 1;
		i = _pow(2, width) + i;
	}
	if ((int)index > width)
		return (-1);
	while (width >= 0)
	{
		if ((unsigned int)_pow(2,width) <= n)
		{
			val = 1;
			n -= _pow(2, width);
		}
		else 
		{
			val = 0;
		}
		if (width  == (int)index)
		{
			return (val);
		}
		width--;
	}
	return (val);

}
