#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: the size of the array
 * @size: the size in bytes
 * Return: the pointer to the memory allocation
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	a = (void *) malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	for ( ; i < nmemb; i++)
	{
	}
	return (a);
}
