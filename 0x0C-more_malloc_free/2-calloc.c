#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: the size of the array
 * @size: the size in bytes
 * Return: the pointer to the memory allocation
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	a = malloc(nmemb * size + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	while (i < nmemb)
	{
		a [i] = 0;
		i++;
	}
	return (a);
}