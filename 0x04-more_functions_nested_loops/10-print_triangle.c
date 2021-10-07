#include "main.h"
/**
 * print_triangle - a function that prints a triangle, followed by a new line.
 *@size: size of the triangle.
 */

void print_triangle(int size)
{
	int  nv;
	int space;
	int charprint;

	if (size <= 0)
	{
		_putchar (10);
	}
	else
	{
		for (nv = 0; nv < size; nv++)
		{
			for (space = size - nv; space > 1; space--)
			{
				_putchar (32);
			}

			for (charprint = 0; charprint <= nv; charprint++)
			{
				_putchar (35);
			}
			_putchar (10);
		}
	}
}
