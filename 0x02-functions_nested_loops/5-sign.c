#include "holberton.h"
/**
* islower - checks for lowercase character.
* @c: The character to be checked
* Return: 1 if c is lowercase 0 otherwise
*/
int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
