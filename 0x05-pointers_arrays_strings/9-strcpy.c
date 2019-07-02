#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - copies a char array
 * @src :the pointer to a char array source
 * @dest : the pointer to a char array destiny
 * Return: length of string
 */
char *_strcpy(char *dest, char *src)
{
	char c;
	int i;

	i = 0;

	while ((c = *(src++)) != '\n')
	{
		dest[i] = c;
		i++;
	}
	dest[i] = '\n';
	return (dest);
}
