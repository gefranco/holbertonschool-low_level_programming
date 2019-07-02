#include "holberton.h"

/**
 * print_rev - prints a string, in reverse.
 * @str :the pointer to a char variable
 * Return: length of string
 */
void print_rev(char *str)
{
	int i = 0;

	while (*(str++) != '\0')
		i++;
	while (i >= 0)
	{
		_putchar(*--str);
		i--;
	}
	_putchar('\n');
}
