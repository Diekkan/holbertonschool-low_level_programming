#include "main.h"
/**
 * print_last_digit - prints last digit
 * @n: digit int.
 * Return: 0 success.
 */

int print_last_digit(int n)
{
	n = n % 10;
	{
	if (n < 0)
		n = n * (-1);
	_putchar((n % 10) + 48);
	return (n);
}
}
