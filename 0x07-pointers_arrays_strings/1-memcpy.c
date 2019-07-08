#include "holberton.h"
#include <stdio.h>
/**
 * _memcpy - copies memory area
 * @dest: area of memory to copy
 * @src: area of memory where copy from
 * @n: number of bytes to copy
 * Return: the encoded string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		*dest = *src;
	}
	return (dest);
}




