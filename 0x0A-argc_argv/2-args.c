#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argc: the total arguments passed
 * @argv: the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
