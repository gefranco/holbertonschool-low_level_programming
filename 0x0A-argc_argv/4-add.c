#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
int is_number(char *n);
/**
 * main - check the code for Holberton School students.
 * @argc: the total atguments
 * @argv: the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (i < argc)
	{
		if (!is_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
int is_number(char *n)
{
	int i;

	for (i = 0; n[i]; i++)
	{
		if (!_isdigit(n[i]))
			return (0);
	}
	return (1);
}
