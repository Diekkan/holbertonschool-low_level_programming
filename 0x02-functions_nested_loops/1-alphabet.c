#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet from a to z in lowercases.
 */

void print_alphabet(void)
{
	int lowc;

	for (lowc = 97; lowc <= 122; lowc++)
	_putchar(lowc);
	_putchar('\n');
}
