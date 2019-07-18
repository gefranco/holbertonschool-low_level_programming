#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: the width of the array
 * Return: the pointer to an array
 */
void *malloc_checked(unsigned int b)
{
	if (b > 0 && malloc(b))
		return malloc(b);
	exit(98);
}
