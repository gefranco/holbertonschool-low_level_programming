#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments
 * @ac: number of arguments passed
 * @av: the arguments
 * Return: the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *a;
	int i = 0;
	int j = 0;
	int i2 = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			j++;
			i2++;
		}
		i++;
		i2++;
	}
	a = malloc(i2 * sizeof(char) + 1);
	if (a == NULL)
		return (NULL);
	i2 = 0;
	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			a[i2] = av[i][j];
			j++;
			i2++;
		}
		a[i2] = '\n';
		i++;
		i2++;
	}
	return (a);
}
