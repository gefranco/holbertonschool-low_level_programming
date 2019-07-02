#include "holberton.h"

/**
 * print_rev - prints a string, in reverse.
 * @s :the pointer to a char variable
 * Return: length of string
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
