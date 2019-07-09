#include "holberton.h"
#include <stdio.h>
/**
 * _strchr -  locates a character in a string
 * @s :the string where lloking the char
 * @c: the character to find
 * Return: the found string
 */
char *_strchr(char *s, char c)
{
	int i;
	char toFind;

	i = 0;
	while ((toFind = s[i]))
	{
		if (toFind == c)
			return (s + i);
		i++;
	}
	while (s[i])
		i++;
	return (s + i);
}
