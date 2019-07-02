#include <stdio.h>
#include "holberton.h"

/**
 * _puts - prints a string,.
 * @str :the pointer to a char variable
 * Return: length of string
 */
void _puts(char *str)
{
	char c;

	while ((c = *(str++)) != '\0')
		_putchar(c);
	_putchar('\n');
}
