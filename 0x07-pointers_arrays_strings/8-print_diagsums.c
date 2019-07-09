#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a matrix
 * @a :the array to be encoded
 * @size: the size
 * Return: the encoded string
 */
void print_diagsums(int *a, int size)
{
	int m;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (m = 0; m < size ; m++)
	{
		sum1 += *(a + ((size + 1) * m));
		sum2 += *(a + ((size - 1) * (m + 1)));

	}
	printf("%d, %d\n", sum1, sum2);
}
