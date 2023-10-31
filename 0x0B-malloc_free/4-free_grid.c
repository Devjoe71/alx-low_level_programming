#include "main.h"
/**
 * free_grid - frees a 2 dimension grid
 * @grid: pointer
 * @height: represents rows
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
