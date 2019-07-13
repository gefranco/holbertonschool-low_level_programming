#include <stdio.h>
#include <stdlib.h>

int is_number(char *n);
int _isdigit(char v);
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
int _isdigit(char c)
{
	if(c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
