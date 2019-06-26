#include <stdio.h>
/**
* main - computes and prints the sum of all the multiples of 3 or 5 below 1024
*/
int main(int n)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024 ; i++)
	{
		if (i  % 5 == 0 || i % 3 == 0)
		{
			sum += i;
		}
	}
	printf("%d \n", sum);
	return (0);
}
