#include <stdio.h>
/**
* main - entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	int j = 0;

	for (; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			putchar(',');
			if (!(i == 9 && j == 9))
			{
				putchar(' ');
			}
		}
		j = 1;
	}
	putchar('\n');
	return (0);
}
