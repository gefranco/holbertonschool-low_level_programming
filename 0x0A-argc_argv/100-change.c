#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins to make change
 * @argc: the total atguments
 * @argv: the arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int change = 0;
	int cents [] = {25, 10, 5, 2, 1};
	int sb = 0;
	int total_change = 0;
	int i = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);
	while (change > 0)
	{
		sb = atoi(argv[1]) % cents[i];
		change = change / cents[i];
		total_change += change;
		change = sb;
		i++;
	}
	printf("%d \n", total_change);
	return (0);
}
