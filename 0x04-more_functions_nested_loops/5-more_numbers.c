#include "holberton.h"
/**
* void more_numbers(void) -  function that prints 10 times 0 to 14
*/
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j < 10 ; j++)
	{
		for (i = 0; i < 15 ; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar(i + '0');
			}
		}
		_putchar('\n');
	}
}
