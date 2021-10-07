#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number of lines.
 */

void print_diagonal(int n)
{
	int lines;
	int spaces;

	if (n <= 0)
	{
		_putchar (10);
	}
	else
	{
		for (lines = 0; lines < n; lines++)
		{
			for (spaces = 0; spaces <= lines; spaces++)
			{
				_putchar (32);
			}
			_putchar (92);
			_putchar (10);

		}
	}

}
