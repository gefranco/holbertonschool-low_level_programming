#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: the width of the array
 * Return: the pointer to an array
 */
void *malloc_checked(unsigned int b)
{
	void *a;
	a = malloc(b);
	if (a != NULL)
		return (a);
	exit(98);
}
