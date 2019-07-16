#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - check if a char is a digit
 * @str: the char
 * Return: 1 if is digit 0 otherwise
 */
char *_strdup(char *str)
{
	char *a;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == 0)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
		i++;
	a = malloc(i  * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	while (j <= i)
	{
		a[j] = str[j];
		j++;
	}
	return (a);
}
