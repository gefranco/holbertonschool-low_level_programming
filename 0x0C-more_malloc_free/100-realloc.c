#include <stdlib.h>
/**
 * _realloc - function that reallocates a memory block
 * @ptr: old pointer
 * @old_size: the old size
 * @new_size: the new size
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
