#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - executes a function given as on each element of an array.
 * @array: the array
 * @size: the array size
 * @action:the function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (; i < size; i++)
	{
		action(array[i]);
	}


}
