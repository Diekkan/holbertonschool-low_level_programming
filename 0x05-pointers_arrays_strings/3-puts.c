#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string
 * @str: the string itself
 */

void _puts(char *str)
{
	int string = 0;

	for (; *(str + string) != 0; string++)
	{
		_putchar(*(str + string));
	}

	_putchar(10);
}
