#include "holberton.h"
/**
* print_line(int n) - function that draws a straight line in the terminal
* @n: the size of the line
*/
void print_line(int n)
{
	int j;

	for (j = 0; j < n ; j++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
