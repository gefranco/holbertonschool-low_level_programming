#include <stdio.h>
/**
* main - prints the first 50 Fibonacci numbers
* Return: 0
*/
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int sum = 0;
	int i;

	for (i = 0; i < 100; i++)
	{
		sum = n1 + n2;
		n2 = sum;
		if (i != 100)
		{
			printf("%d ,", sum);
		}
	}
	putchar('\n');
	return (0);
}


