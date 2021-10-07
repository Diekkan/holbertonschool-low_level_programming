#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints all numbers between 0 and 14.
 */

void more_numbers(void)
{
	int times;
	int numbers;

	for (times = 0; times < 10; times++)
	{
		for (numbers = 0; numbers <= 14; numbers++)
		{
			if (numbers >= 10)
			{
				_putchar((numbers / 10) + 48);
			}

			_putchar((numbers % 10) + 48);
		}

		_putchar (10);
	}
}
