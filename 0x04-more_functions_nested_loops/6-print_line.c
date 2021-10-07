#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: number of straight lines.
 */

void print_line(int n)
{
	int line;

	if (n <= 0)
	{
		_putchar (10);
	}
	else
	{
		for (line = 0; line < n; line++)
		{
			_putchar (95);
		}
	_putchar (10);

	}
}
