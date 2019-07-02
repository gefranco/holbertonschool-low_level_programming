#include <stdio.h>
#include "holberton.h"

/**
 * swap_int - length of a string.
 * @a :the pointer of an int variable
 * @b : the pointer of an int variable
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
