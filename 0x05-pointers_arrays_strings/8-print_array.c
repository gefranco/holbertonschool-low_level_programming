#include "holberton.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integers
 * @a :the pointer to an array of ints
 * @n :total numbers
 * Return: length of string
 */
void print_array(int *a, int n)
{
	int c;
	int i;

	i = 0;
	do {
		c = *(a++);
		i++;
		printf("%d, ", c);
	} while (i < n - 1);
	c = *(a++);
	printf("%d", c);
	putchar('\n');
}
