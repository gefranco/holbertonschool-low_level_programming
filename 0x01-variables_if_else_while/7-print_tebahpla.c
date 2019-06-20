#include <stdio.h>
/**
* main - entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = sizeof(alphabet)-1;

	while (i >= 0)
	{
		putchar(alphabet[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
