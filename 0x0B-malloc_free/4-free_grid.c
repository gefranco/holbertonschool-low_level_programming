#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - check if a char is a digit
 * @grid: the multidimentional array
 * height: the height of the array
 * Return: 1 if is digit 0 otherwise
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
