#include<stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: the number
 * @index: the index
 * Return: 1 if success -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b2 = 1;
	unsigned long int c = 0;
	unsigned long int nu = 0;
	unsigned long int nu2 = *n;

	while (index + 1 > c)
	{
		if (nu2 > 0)
			nu2 = nu2 >> 1;
		else
			break;

		if (index == 0)
		{
			nu += b2;
		}


		b2 *= 2;


		index--;
	}

	*n = *n - nu;
	return (1);
}
