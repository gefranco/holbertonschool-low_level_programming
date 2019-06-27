#include "holberton.h"
/**
* print_square - function that prints a square
* @size: size of the square
*/
void print_square(int size)
{
	int j;
	int i;

	for (j = 0; j < size ; j++)
	{
		for (i = 0; i < size ; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
