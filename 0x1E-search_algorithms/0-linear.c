#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Linear search algorithm to find a value
 * @array: the array
 * @size: the array size
 * @value: the value to find
 * Return: The index of the value if found, -1 otherwise
 */
int linear_search(int *array, size_t size, int value)
{


	size_t i;
	(void) size;
	(void) value;

	if (array == NULL)
		return (-1);

	array[size] = value;
	for (i = 0;  ; i++)
	{
		printf("Value checked array[%li] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			if (i < size)
				return (i);
			else
				return (-1);
		}
	}

}

