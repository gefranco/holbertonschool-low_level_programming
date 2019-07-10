#include "holberton.h"
#include <stdio.h>
/**
 * _strlen_recursion - calculates the length of a string
 * @s :the string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(++s) + 1);
	}
	else
	{
		return (0);
	}
}
