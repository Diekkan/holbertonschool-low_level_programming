#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - print it all.
 *@format: format string
 */

void print_all(const char * const format, ...)
{
	char *auxs, *separator;
	va_list ap;
	size_t a;

	a = 0;
	va_start(ap, format);
	separator = "";

	while (format && format[a])
	{
		switch (format[a])
		{
			case ('c'):
				printf("%s", separator);
				printf("%c", va_arg(ap, int));
			break;
			case ('i'):
				printf("%s", separator);
				printf("%d", va_arg(ap, int));
			break;
			case ('s'):
				auxs = va_arg(ap, char *);
				if (auxs == NULL)
				{
					printf("%s", separator);
					printf("(nil)");
					break;
				}
				printf("%s", separator);
				printf("%s", auxs);
			break;
			case('f'):
				printf("%s", separator);
				printf("%f", va_arg(ap, double));
			break;
		}
		separator = ", ";
		a++;
	}
	printf("\n");
}
