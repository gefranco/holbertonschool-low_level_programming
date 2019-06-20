#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	long int i = 0;

	while (i < 100)
	{
		putchar(i / 10 + '0');
		i += 10;
	}
	putchar('\n');
	return (0);
}
