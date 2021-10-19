#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - a function that prints the chessboard.
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;
	int size = 8;

	for (i = 0; i != size ; i++)
	{
		for (j = 0; j != size; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
