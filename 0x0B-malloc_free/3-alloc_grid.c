#include "main.h"

/**
* alloc_grid - returns a pointer to a 2d array of ints
* @width: width of the grid
* @height: height of the grid
* Return: pointer to the grid/2d array
*/
int **alloc_grid(int width, int height)
{	
	int **arr = malloc(sizeof(int*) * height);
	int i = 0;

	if (!arr)
		return (NULL);
	while (i < 0)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (!arr[i])
			return (NULL);
		i++;
	}
	return (arr);

}

