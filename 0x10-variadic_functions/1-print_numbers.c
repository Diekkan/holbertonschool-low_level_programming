#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers.
 * @separator: string to be printed between numbers.
 * @n: n of integers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, unsigned int));
		if (separator == NULL)
			continue;
		else if (i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
}
