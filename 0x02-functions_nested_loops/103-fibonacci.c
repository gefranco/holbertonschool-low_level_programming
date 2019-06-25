#include <stdio.h>
/**
* main - finds and prints the sum of the even-valued
* Return: 0 for success
*/
int main(void)
{
	long n1 = 1;
	long n2 = 2;
	long sum = 0;
	int i;
	long sumOdd = 0;

	while (n2 < 4000000)
	{
		sum = n1 + n2;
		n2 = sum;
		if (sum % 2 != 0)
		{
			sumOdd += sum;
		}
		printf("%ld ,", sumOdd);
	}
	printf("%ld ,", sumOdd);
	putchar('\n');
	return (0);
}


