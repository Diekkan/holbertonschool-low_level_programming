#include <stdio.h>
#include "main.h"
/**
 * print_numbers - a function that prints the numbers from 0 to 9.
 */

void print_numbers(void)
{
	int numbers;

	for (numbers = 48; numbers >= 57; numbers++)
		_putchar(numbers);

	_putchar(10);
}
