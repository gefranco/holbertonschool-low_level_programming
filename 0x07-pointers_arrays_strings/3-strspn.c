#include "holberton.h"
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s :the array where find the segment
 * @accept : the segment to find
 * Return: total found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int count;
	int j;

	i = 0;
	count = 0;
	while (s[i] != ',' && s[i] != '\0')
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				count++;
			}
			j++;
		}

		i++;
	}
	return (count);
}
