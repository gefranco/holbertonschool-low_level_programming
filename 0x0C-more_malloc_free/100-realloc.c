#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: the minimun number
 * @max: the maximun number
 * Return: the pointer to the memory allocation
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int i2 = 0;
	char *ptr2  = (char *)ptr;

	a =  malloc(new_size * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	while (i2 < old_size)
	{
		a[i2] = ptr2[i2];
		i2++;
	}
	free(ptr);
	return (a);
}
