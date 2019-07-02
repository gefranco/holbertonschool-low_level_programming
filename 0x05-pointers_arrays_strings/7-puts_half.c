#include "holberton.h"
/**
 * puts_half - prints half of a string
 * @str :the pointer to a char variable
 */
void puts_half(char *str)
{
	char c;
	int j;
	int i;

	i = 0;
	do {
		i++;
		c = str[i];
	
	} while (c);

	if (i % 2 != 0)
	{
		j = (i - 1) / 2;
	}
	else
	{
		j = i / 2;
	}
	
	while (j < i)
	{
		c = str[j];
		_putchar(c);
		j++;
	}
	_putchar('\n');
}
