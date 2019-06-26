#include <stdio.h>
#include "holberton.h"
/**
* print_to_98 - prints all natural numbers from n to 98
* @n: start to print from this number
*/
void print_to_98(int n)
{
	for (; n < 99 ? n < 99 : n > 99; n < 99 ? n++ : n--)
	{
		if (n != 98)
		{
			printf("%d, ", n);
		}
		else
		{
			printf("%d", n);
		}
	}
	printf("\n");
}
