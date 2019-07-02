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
	int x;
	int x2;
	int i = 0;
	char rev[12];
	int j = 0;
	
	while ((c = *(str++)) != '\0')
		i++;
	x2 = i;

	while (i >= 0)
	{
		c = *(--str);
		rev[j] = c;
		i--;
		j++;
	}
	for (x = 1; x <= x2; x++)
	{
		str[x - 1] = rev[x];
	}
}
