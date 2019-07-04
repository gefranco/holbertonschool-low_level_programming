#include "holberton.h"
#include <stdio.h>
/**
 * reverse_array - function that reverses a string.
 * @a :the pointer to a char variable
 * @n : the size of the array
 * Return: length of string
 */
void reverse_array(int *a, int n)
{
	int c;
	int x;
	int i = n;
	int rev[1000];
	int j = 0;

	while (i < n)
	{
		c = a[i];
		i++;
	}
	while (i >= 0)
	{
		c = a[i];
		rev[j] = c;
		i--;
		j++;
	}
	for (x = 1; x <= n; x++)
	{
		a[x - 1] = rev[x];
	}
}
