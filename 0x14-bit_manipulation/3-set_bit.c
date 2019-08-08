#include<stdio.h>
#include<stdlib.h>
#include "holberton.h"
int citob(unsigned long int n);
void itob(unsigned long int n,  char *b, int count);
unsigned long int bitoi(char *b);
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index
 * Return: the value of the index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int nu = *n;
	char *b;
	int count;
	(void) index;
	
	count = citob(nu);	
	count ++;
	b = malloc(count * sizeof(char));
	
	
	if(b == NULL)
		return -1;
	itob(nu, b , count);
	b[count] = '0';
	b[0] = '0';
	b[index + 1] = '1';	
 	*n = bitoi(b);	
	return 0;
}

int citob(unsigned long int nu)
{
	int count;
	
	unsigned long int cu = 0;
	count = 0;
	while(nu > cu)
	{
		nu = nu >> 1;

		count ++;
	}	
	
		return count;	

}

void itob(unsigned long int nu, char *b, int count)
{	
	int bi;
	unsigned long int cu = 0;
	while(nu > cu)
	{
		bi = nu & 1;
		b[count] = bi + '0';
		nu = nu >> 1;
		count --;
		
	}

}

unsigned long int bitoi(char *b)
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
