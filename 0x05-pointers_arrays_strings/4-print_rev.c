#include "holberton.h"

/**
 * print_rev - prints a string, in reverse.
 * @str :the pointer to a char variable
 * Return: length of string
 */
void print_rev(char *str)
{
	char c;
	int i = 0;

	while ((c = *(str++)) != '\0')
		i++;
	while (i >= 0)
	{
		c = *(--str);
		_putchar(c);
		i--;
	}

	_putchar('\n');
}
