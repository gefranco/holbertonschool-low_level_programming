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
		return (NULL);
	}

	a = malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < height)
	{
		a[i] = malloc(width * sizeof(int) );
		if (a[i] == NULL)
			return (NULL);
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
