#include "main.h"
#include <stdlib.h>

/**
 * free_grid - the address of
 * @grid: the grid
 * @height: the height
 * Return: resultado
 */

void free_grid(int **grid, int height)

{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
