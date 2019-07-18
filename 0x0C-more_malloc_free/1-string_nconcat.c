#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the limit of characters
 * Return: the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int i2 = 0;
	unsigned int j2 = 0;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = ""; 
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (n > j)
	{
		n = j;
	}
	a = malloc((i + n) * sizeof(char) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	while (i2 < i)
	{
		a[i2] = s1[i2];
		i2++;
	}
	while (j2 <= n)
	{
		a[j2 + i2] = s2[j2];
		j2++;
	}
	a[j2 + i2] = '\0';
	
	return (a);
}

