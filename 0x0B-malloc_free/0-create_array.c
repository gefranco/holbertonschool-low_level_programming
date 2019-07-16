#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size:: the size of the array
 * @c: the char tha will fill the array
 * Return: the string, NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i = 0;

	if (size <= 0)
	{
		return (NULL);
	}
	a = malloc(size * sizeof(char));
	if (a)
	{
		return (NULL);
	}
	while (i < size)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
