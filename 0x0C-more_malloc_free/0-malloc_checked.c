#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory using malloc
 * @b: the width of the array
 * Return: the pointer to an array
 */
void *malloc_checked(unsigned int b)
{

	if (malloc(b) && b > 0)
		return (malloc(b));
	else
		exit(98);
}
