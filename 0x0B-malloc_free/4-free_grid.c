#include "main.h"

/**
* free_grid -> removing memory allocation
* @grid: grid to ne freed
* @height: the height of matrix
* Return: nothing
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
