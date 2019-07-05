#include "holberton.h"
#include <stdio.h>
/**
 * _strcmp - concatenate two strings
 * @s1 :the array to be appended
 * @s2 : the array to append
 * Return: the concatenated String
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int e;
	int i2;

	i = 0;
	e = 0;
	i2=0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
		{
			e = 10;
			i2 = i;
		}
		else if (s2[i] > s1[i])
		{
			e = -10;
			i2 = i * -1;	
		}
		i++;
	}
	return (e + i2);
}
