#include "holberton.h"
/**
* void print_line(int n) - function that draws a straight line in the terminal
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