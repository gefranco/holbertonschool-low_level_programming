#include "holberton.h"
/**
* print_diagonal - draws a diagonal line on the terminal
* @n: size
*/
void print_diagonal(int n)
{
	int j;
	int i;

	for (j = 0; j < n ; j++)
	{
		for (i = 0; i < j ; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
