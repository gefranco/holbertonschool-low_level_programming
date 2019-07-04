#include "holberton.h"
#include <stdio.h>
/**
 * leet - function that encodes a string into 1337
 * @src :the array to be appended
 * Return: the encoded string
 */
char *leet(char *src)
{
	int i;
	int j;
	char *n;
	char *v;

	v = "aeotlAEOTL";
	n = "4307143071";
	i = 0;
	j = 0;
	while ((src[j]) != '\0')
	{
		for (i = 0; v[i]; i++)
		{
			if (src[j] == v[i] || src[j] == v[i] || src[j] == v[i] || src[j] == v[i]
				|| src[j] == v[i] || src[j] == v[i] || src[j] == v[i]
				|| src[j] == v[i] || src[j] == v[i] || src[j] == v[i])
			{
				src[j] = n[i];
			}
		}
		j++;
	}
	return (src);
}




