#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number of lines.
 */

void print_diagonal(int n)
{
	int lines;

	if (n <= 0)
	{
		_putchar (10);
	}
	else
	{
		for (lines = 0; lines < n; lines++)
		{
			_putchar (47);
			_putchar (10);
		}
	}

}
