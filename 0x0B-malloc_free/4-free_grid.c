#include "main.h"

/**
* free_grid - frees a 2dD array
* @grid: pointer to the array/grid
* @height: height of the grid
* Return: void
*/
void free_grid(int **grid, int height)
{
	while (height > 0)
	{
		free(grid[height - 1]);
		height--;
	}
	free(grid);
}

