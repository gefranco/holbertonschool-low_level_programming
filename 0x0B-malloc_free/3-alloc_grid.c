#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the width of the array
 * @height: the height of the array
 * Return: the pointer to an array
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	a = malloc(height * sizeof(int *));
	while (i < height)
	{
		a[i] = malloc(width * sizeof(int));
		i++;
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
