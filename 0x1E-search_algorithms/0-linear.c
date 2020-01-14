#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{


	size_t i;
	(void) size;
	(void) value;
	
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

