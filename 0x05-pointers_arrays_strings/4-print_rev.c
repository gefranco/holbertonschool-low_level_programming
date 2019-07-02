#include "holberton.h"

/**
 * print_rev - prints a string, in reverse.
 * @s :the pointer to a char variable
 * Return: length of string
 */
void print_rev(char *s)
{
	int i = 0;

	while (*(s++) != '\0')
		i++;
	while (i >= 0)
	{
		_putchar(*--s);
		i--;
	}
	_putchar('\n');
}
