#include "holberton.h"
/**
* print_triangle - function that draws a triangle on the terminal
* @size: the size of the triangle
*/
void print_triangle(int size)
{
	int j;
	int i;
	int x = size;
	int z = 0;

	for (j = 0; j < size ; j++)
	{
		x--;
		for (i = 0; i < x ; i++)
		{
			_putchar(' ');
		}
		for (z = x ; z < size ; z++)
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
