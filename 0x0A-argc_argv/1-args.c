#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 * @argc: the total arguments
 * @argv: the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (**argv)
		printf("%d\n", argc);
	return (0);
}
