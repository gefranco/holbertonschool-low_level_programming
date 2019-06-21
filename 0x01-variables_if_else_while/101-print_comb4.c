#include <stdio.h>
/**
* main - entry point
* Return: Always 0 (Success)
*/
int main(void)
{
	int i = 0;
	int j = 0;
	int x = 0;

	for (; i < 10; i += 1)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (x = j + 1; x < 10; x++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(x + '0');
				if (!(i == 7 && j == 8 && x == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		j = 1;
	}
	putchar('\n');
	return (0);
}
