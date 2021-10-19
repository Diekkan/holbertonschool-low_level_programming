#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: the string itself
 */

void print_rev(char *s)
{
	int string;
	int rev;

	for (string = 0; s[string] != '\0'; string++)
	{
		if (*s == ' ')
			break;
	}

	rev = string;
	while (rev >= 0)
	{
		if (*s == ' ')
			break;
		else
		{
		_putchar(s[rev]);
		rev--;
		}
	}

	_putchar('\n');
}
