#include <stdio.h>
/**
* main - entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	char alph[] = "abcdefghijklmnopqrstuvwxyz";
	int i = sizeof(alph);

	while (i >= 0)
	{
		putchar(alph[i]);
		i--;
	}
	putchar('\n');
	return (0);
}
