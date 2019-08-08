#include<stdio.h>
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

	b = 0;
	u = 1;
	while (index + 1 > 0 )
	{


		b = n & u;
		n = n >> 1;
		index--;
		if(!n && n !=0)
		{

			return (-1);

		}
	}
	return (b);
}
