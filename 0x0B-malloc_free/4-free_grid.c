#include <stdlib.h>
#include "main.h"

/**
 * free_grid - alloc_grid
 * @grid: pointer to arrays
 * @height: array and rows
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
free(grid[i]);
free(grid);
}
