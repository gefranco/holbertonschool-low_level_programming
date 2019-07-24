#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * cmp - check if a number is integer
 * @n: the integer to check
 *
 * Return: 0 if true, 1 otherwise.
 */
int cmp(int n)
{
	if (n && isdigit(n))
		return (0);
	else
		return (1);
}
/**
 * int_index - searches for an integer
 * @array: the array
 * @size: the size
 * @cmp: the function
 * Return: -1 if no number is found or size < 0, the number otherwise.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || !array || !cmp)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
