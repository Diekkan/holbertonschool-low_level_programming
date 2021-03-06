#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings.
 *@separator: separator.
 *@n: number of strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *p = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(ap, char *);

		if (p != NULL)
			printf("%s", p);
		else
		{
			printf("(nil)");
		}

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
