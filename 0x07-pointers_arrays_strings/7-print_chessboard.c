#include "holberton.h"
#include <stdio.h>
/**
 * print_chessboard - prints the chessboard
 * @a :the pointer to the multiarray
 */
void print_chessboard(char (*a)[8])
{
	int f;
	int c;

	f = 0;
	for (f = 0; f < 8; f++)
	{
		for (c = 0; c < 8; c++)
		{
			_putchar (a[f][c]);
		}
		printf("\n");
	}
}
