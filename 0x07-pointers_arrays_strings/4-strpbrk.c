#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - function that encodes a string using rot13
 * @s :the array where looking
 * @accept: string to find
 * Return: the portion of the array founded
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	int j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
