#include <stdio.h>
void fibonacci(int n);
/**
* main - computes and prints the sum of all the multiples of 3 or 5 below 1024
*/
int main(int n)
{
	int n1 = 1;
	int n2 = 2;
	int sum = 0;
	int i;

	for(i = 0; i < 100; i++)
	{
		sum = n1 + n2;
		n2=sum;
		
		printf("%d ,", sum);
	}
	putchar('\n');
	return (0);
}


