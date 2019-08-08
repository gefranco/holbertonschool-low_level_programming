#include<stdio.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: the pointer to an array of the binary number
 * Return: the corresponding int number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int n;
	unsigned int b2;

	i = 0;
	b2 = 1;
	n = 0;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;

	i--;
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			n += b2;
		}

		i--;
		b2 *= 2;

	}

	return (n);
}
