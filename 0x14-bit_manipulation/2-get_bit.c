#include<stdio.h>
#include<limits.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index
 * Return: the value of the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;
	int u;
	unsigned long int c = 0;

	b = 0;
	u = 1;
	if (index > 63)
		return (-1);
	while (index + 1 > c)
	{


		b = n & u;
		n = n >> 1;
		index--;
	}
	return (b);
}
