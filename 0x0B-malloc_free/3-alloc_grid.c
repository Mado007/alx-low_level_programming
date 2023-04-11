#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @width: numbers of column’s width 
 * @height: number of rows
 *
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
int **grid, i, j;

if (width < 1 || height < 1)
return (NULL);
grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
grid[i] = malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
while (--i >= 0)
free(grid[i]);
free(grid);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
grid[i][j] = 0;
}
return (grid);
}
