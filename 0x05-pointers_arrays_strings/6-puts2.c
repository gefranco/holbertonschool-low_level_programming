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

	c = str[0];
	i = 0;
	_putchar(c);
	do {
		c = str[i += 2];
		_putchar(c);
	} while (c  != '\0');
	_putchar('\0');
	_putchar('\n');
}
