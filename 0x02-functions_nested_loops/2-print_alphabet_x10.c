#include "holberton.h"
/**
* print_alphabet_x10 - Print the alphabet 10 times
*/
void print_alphabet_x10(void)
{
	int i = 97;
	int j;

	for (j = 0 ; j < 10; j++)
	{
		while (i <= 122)
		{
			_putchar(i);
			i++;
		}
		i = 97;
		_putchar('\n');
	}
}
