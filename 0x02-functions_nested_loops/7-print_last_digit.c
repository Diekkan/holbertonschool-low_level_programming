#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints last digit
 * @d: digit int.
 * Return: 0 success.
 */
int print_last_digit(int d)
{
	int lastdig = d % 10;

	printf("%d", lastdig);

	return (0);
}
