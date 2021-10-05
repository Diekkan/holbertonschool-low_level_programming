#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: number input
 * Return: 1 for +, 0 = 0, -1 for -
 */

int print_sign(int n)
{
	if (n > 48)
	{
		_putchar('+');
		return (1);
	}
	if (n == 48)
	{
		_putchar('0');
		return (0);
	}
	if (n < 48)
	{
		_putchar('-');
		return (-1);
	}
	
	return (0);
}
