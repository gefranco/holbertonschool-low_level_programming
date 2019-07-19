#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: the minimun number
 * @max: the maximun number
 * Return: the pointer to the memory allocation
 */
int *array_range(int min, int max)
{
	int *a;
	int i = min;
	int i2 = 0;

	if (min > max)
	{
		return (NULL);
	}
	a =  malloc((max - min + 1) * sizeof(int));
	if (a == NULL)
	{
		return (NULL);
	}
	while (i2 <= (max - min))
	{
		a[i2] = i;
		i2++;
		i++;
	}
	return (a);
}
