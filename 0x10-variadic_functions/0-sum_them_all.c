#include "variadic_functions.h"

/**
 * sum_them_all - function that sums all arguments.
 *@n: arguments
 *
 * Return: the result of the addition.
 */

int sum_them_all(const unsigned int n, ...)
{
	int res = 0;
	va_list ap;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		res = res + va_arg(ap, const unsigned int);
	}

	va_end(ap);

	return (res);
}
