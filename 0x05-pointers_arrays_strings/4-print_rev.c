#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string itself
 */

void print_rev(char *s)
{
	int string = 0;
	int rev;

	for (; *(s + string) != 0; string++)

	 rev = string - 1;

	for (; *(s + rev) != (rev >= 0); rev--)
	{
		putchar(*(s + rev));
	}

	_putchar('\n');
}
