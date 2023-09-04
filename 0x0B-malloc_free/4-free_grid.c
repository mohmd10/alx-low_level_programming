#include <stdlib.h>
#include "holberton.h"

/**
* free_grid - funtion frees a 2 dimensional grid
* @grid : double pointer in
* @height : variable in
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}
		free(grid);
}
