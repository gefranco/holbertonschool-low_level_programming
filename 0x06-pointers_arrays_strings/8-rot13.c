#include "holberton.h"
#include <stdio.h>
/**
 * rot13 - function that encodes a string using rot13
 * @src :the array to be encoded
 * Return: the encoded string
 */
char *rot13(char *src)
{
	int i;
	int j;
	char *n;
	char *v;

	v = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	n = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	i = 0;
	j = 0;
	while ((src[j]) != '\0')
	{
		for (i = 0; v[i]; i++)
		{
			if (src[j] == v[i])
			{
				src[j] = n[i];
				break;
			}
		}
		j++;
	}
	return (src);
}




