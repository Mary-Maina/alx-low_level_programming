#include "main.h"
#include <stdlib.h>
/**
 * free_grid- Frees up 2D grid created
 * @grid: Pointer to the array
 * @height: Height of the array
 * Return: Freed up space
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
