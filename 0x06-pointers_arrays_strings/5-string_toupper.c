#include "holberton.h"
#include <stdio.h>
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @src :the array to be appended
 * Return: the upper string
 */
char *string_toupper(char *src)
{
	int i;

	i = 0;

	while ((src[i]) != '\0')
	{
		if (src[i] >= 97 && src[i] <= 122)
		{
			src[i] = src[i] - 32;
		}
		i++;
	}
	return (src);
}
