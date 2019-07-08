#include "holberton.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s :the array to fill
 * @b :char to fill with
 * @n :the number of memory to fill
 * Return: the filled array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] = b;
	}
	return (s);
}




