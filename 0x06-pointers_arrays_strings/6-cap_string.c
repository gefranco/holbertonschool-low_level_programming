#include "holberton.h"
#include <stdio.h>
/**
 * cap_string - concatenate two strings
 * @src :the array to be appended
 * Return: the concatenated String
 */
char *cap_string(char *src)
{
	int i;

	i = 0;

	while ((src[i]) != '\0')
	{
		if (src[i] == '\n' || src[i] == '\t' || src[i] == ' '
			|| src[i] == '.' || src[i] == ',' || src[i] == ';' || src[i] == '!'
			|| src[i] == '?' || src[i] == '(' || src[i] == ')' || src[i] == '{'
			|| src[i] == '}' || src[i] == '\"')
		{
			if ((src[i + 1] >= 97 && src[i + 1] <= 122))
				src[i + 1] = src[i + 1] - 32;
		}
		i++;
	}
	return (src);
}
