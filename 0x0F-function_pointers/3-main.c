#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "3-calc.h"
/**
 * main - program entry point
 * @argc: number of arguments
 * @argv: the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][0] !=  42 && argv[2][0] != 43 && argv[2][0] != 37
		&& argv[2][0] != 45 && argv[2][0] != 47)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == 47 || argv[2][0] == 37) && argv[3][0] == 48)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
