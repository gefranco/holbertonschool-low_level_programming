#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - Binary search algorithm to find a value
 * @array: the array
 * @size: the array size
 * @value: the value to find
 * Return: The index of the value if found, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	int i = 0;
	int l = 0;
	int r = size - 1;
	int m;
	(void) size;
	(void) value;
	(void) array;
	if (array == NULL)
		return (-1);
	while (l <= r)
	{
		printf("Searching in array: ");

		i = 0;

		for (i = l ; i <= r - 1; i++)
		{
			printf("%d, ", array[i]);

		}
		printf("%d\n", array[i]);
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
		}
		else if (array[m] > value)
		{
			r = m - 1;
		}
		else
			return (m);
	}
	return (-1);
}
