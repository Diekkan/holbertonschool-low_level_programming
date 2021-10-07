#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints numbers between 0 and 9, except for 2 and 4
 */

void print_most_numbers(void)
{
	int numbers;

	for (numbers = 48; numbers <= 57; numbers++)
	{
		if (numbers != 50 && numbers != 52)
		{
			_putchar(numbers);
		}
		else
		{
			continue;
		}
	}

	_putchar(numbers);
}	
