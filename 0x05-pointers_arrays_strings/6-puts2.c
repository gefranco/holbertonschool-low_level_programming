#include "holberton.h"

/**
 * puts2 -  prints one char out of 2 of a string.
 * @str :the pointer to a char variable
 * Return: length of string
 */
void puts2(char *str)
{
	char c;
	int i;

	i = 0;
	do {
		if (i % 2 == 0)
		{
			c = str[i];
			if (c)
			_putchar(c);
		}
		i++;
	} while (c);
	_putchar('\n');
}
