#include "main.h"
#include <stdio.h>
/**
 * print_binary - print a int to binary.
 *@n: no to be binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin = n;

	if (bin > 1)
		print_binary(bin >> 1);

	_putchar((bin & 1) + '0');
}
