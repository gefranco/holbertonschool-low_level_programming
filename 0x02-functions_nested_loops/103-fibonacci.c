#include <stdio.h>
/**
* main - computes and prints the sum of all the multiples of 3 or 5 below 1024
*/
int main(int n)
{
	long n1 = 1;
	long n2 = 2;
	long sum = 0;
	int i;
	long sumOdd = 0;
	while(n2 < 4000000)
	{
		
		sum = n1 + n2;
		
		n2=sum;
		if(sum % 2 !=0)
		{
			sumOdd+=sum;
		}

		
		printf("%ld ,", sumOdd);
	}
	

	printf("%ld ,", sumOdd);
	putchar('\n');
	return (0);
}


