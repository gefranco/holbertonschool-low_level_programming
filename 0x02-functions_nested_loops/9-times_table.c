#include "holberton.h"
/**
* times_table - print a table of numbers
*/
void times_table(void)
{
	int n1;
	int n2 = 0;
	int n21 = 0;
	int firstDigit;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n21 = 0; n21 <= 9; n2 += n1, n21++)
		{
			firstDigit = n2;
			if (n2 >= 10)
			{
				while (firstDigit >= 10)
				{
					firstDigit /= 10;
					_putchar(firstDigit + '0');
				}
			}
			_putchar(n2 % 10 + '0');
			if (n21 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (n2 < 10)
			{
				_putchar(' ');
			}
		}
		n2 = 0;
		_putchar('\n');
	}
}
