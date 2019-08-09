#include<stdio.h>
/**
 * flip_bits - number of bits you would need to flip.
 * @n: the number
 * @m: the number 2
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	int bnu;
	int bnu2;
	unsigned long int c = 0;
	unsigned long int nu2 = m;

	bnu = 0;
	bnu2 = 0;
	while (n > c)
	{

		bnu2 = nu2 & 1;
		bnu = n & 1;
		nu2 = nu2 >> 1;
		n = n >> 1;
		if (bnu ^ bnu2)
			count++;

	}

	return (count);
}
