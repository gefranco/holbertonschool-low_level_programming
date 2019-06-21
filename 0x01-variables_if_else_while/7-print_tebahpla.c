#include <stdio.h>
/**
* main - entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char z = 'z';
	
	do 
	{
		putchar(z);
		z--;
	}while (z >= 'a');
	putchar('\n');
	return (0);
}
