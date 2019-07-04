#include "holberton.h"
#include <stdio.h>
/**
 * _strncpy - concatenate two strings
 * @src :the array to be appended
 * @dest : the array to append
 * @n :the size of the array
 * Return: the concatenated String
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while ((dest[i] = src[i]))
	{
		i++;
		if (i == n)
			break;
	}
	while (i < n -1)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
