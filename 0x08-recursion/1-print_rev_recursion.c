#include "holberton.h"
#include <stdio.h>
/**
 * _print_rev_recursion - prints a string in reverse
 * @s :the String to be encoded
 */
void _print_rev_recursion(char *s)
{
	if (*s++ != '\0')
	{
		_print_rev_recursion(s--);
		_putchar(*s);
	}
}
