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
	(void)argc;
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
