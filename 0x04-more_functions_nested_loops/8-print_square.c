#include "main.h"
/**
 * print_square -  a function that prints a square, followed by a new line.
 *@size: size of the square.
 */

void print_square(int size)
{
	int width;
	int weight;

	if (size <= 0)
	{
		_putchar (10);
	}
	else
	{
		for (weight = 0; weight < size; weight++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar (35);

				if (width == size - 1)
				{
					_putchar (10);
				}
			}
		}
	}
}
