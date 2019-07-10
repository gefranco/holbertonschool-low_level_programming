#include "holberton.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string
 * @s :the array to be printed
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	if (*s++ != '\0')
		_puts_recursion(s++);
	else
		_putchar('\n');
}