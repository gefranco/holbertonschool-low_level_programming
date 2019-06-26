#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers
* Return: 0
*/
int main(void)
{
	long n1 = 1;
	long n2 = 2;
	long sum = 0;
	int i;

	printf("%ld, ", n1);
	printf("%ld, ", n2);
	for (i = 0; i < 48; i++)
	{
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;	
		if (i != 47)
		{
			printf("%ld, ", sum);
		}
		else
		{
			printf("%ld", sum);
		}
	}
	putchar('\n');
	return (0);
}


