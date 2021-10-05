#include <stdio.h>
#include "header.h"
/**
 * print_alphabet - prints the alphabet from a to z in lowercases.
 */

void print_alphabet(void)
{
	int lowc;

	for (lowc = 97; lowc <= 122; lowc++)
	putchar(lowc);
	putchar('\n');
}
