#include "holberton.h"
#include <stdio.h>
/**
 * _strcat - concatenate two strings
 * @src :the array to be appended
 * @dest : the array to append
 * Return: the concatenated String
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j = 0;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while ((dest[i] = src[j]))
	{
		j++;
		i++;
	}
	return (dest);
}
