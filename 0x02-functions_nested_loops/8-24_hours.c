#include "holberton.h"
/**
* jack_bauer - prints every minute of the day
*/
void jack_bauer(void)
{
	int minutos1 = 0;
	int minutos2 = 0;
	int hora1;
	int hora2 = 0;
	int n = 9;

	for (hora1 = 0; hora1 <= 2; hora1++)
	{
		for (; hora2 <= n; hora2++)
		{
			for (minutos1 = 0; minutos1 <= 5; minutos1++)
			{
				for (minutos2 = 0; minutos2 <= 9 ; minutos2++)
				{
				_putchar(hora1 + '0');
				_putchar(hora2 + '0');
				_putchar(':');
				_putchar(minutos1 + '0');
				_putchar(minutos2 + '0');
				_putchar('\n');
				}
			}
			if (hora1 == 2)
			{
				n = 3;
			}
		}
		hora2 = 0;
	}
}
