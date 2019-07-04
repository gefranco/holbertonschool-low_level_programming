#include "holberton.h"
#include <stdio.h>
/**
 * _strncat - concatenate two strings
 * @src :the array to be appended
 * @dest : the array to append
 * @n : the size
 * Return: the concatenated String
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j = 0;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (j < n)
	{
		dest[i] = src[j];
		if (dest[i] == '\n')
		break;
		i++;
		j++;
	}
	return (dest);
}
