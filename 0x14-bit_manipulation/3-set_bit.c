#include<stdio.h>
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index
 * Return: the value of the index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/*int b;*/
	/*int u;*/
	unsigned long int b2 = 1;
	unsigned long int c = 0;
	unsigned long int nu = 0;
	/*b = 0;*/
	/*u = 1;*/
	while (index + 1 > c)
	{
	
		/*b = n & u;*/
		nu = nu >> 1;


	 	if (index == 0)
		{
			nu += b2;
		}


		b2 *= 2;


		index--;
	}

	*n = *n + nu;
	return (1);
}
