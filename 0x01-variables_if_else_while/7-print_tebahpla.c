#include <stdio.h>
/**
* main - entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int i = sizeof(alphabet);

	while (i >= 0)
	{
		putchar(alphabet[i]);
		i--;
	}
	putchar('\n');
	return (0);
}

