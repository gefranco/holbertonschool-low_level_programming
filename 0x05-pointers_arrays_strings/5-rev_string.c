#include "holberton.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string.
 * @str :the pointer to a char variable
 * Return: length of string
 */
void rev_string(char *str)
{
	char c;
	int i = 0;

	while ((c = *(str++)) != '\0')
		i++;
	char rev[i];
	int j = 0;
	int x2 = i;

	while (i >= 0)
	{
		c = *(--str);
		rev[j] = c;
		i--;
		j++;
	}
	int x;

	for (x = 1; x <= x2; x++)
	{
		str[x - 1] = rev[x];
	}
}
