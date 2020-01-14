#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
int binary_search(int *array, size_t size, int value)
{


	size_t i = 0;
	float l = 0;
	float r = size - 1;
	int m;
	(void) size;
	(void) value;
	(void) array;
	
	

	while (l <= r)
	{
	

		printf("Searching in array: ");
	
		i = 0;	


		for (i = l ; i <= r - 1;i++)
		{
			printf("%d ,",array[i]);

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
			return m;

	

	}


	return (-1);
	

}

