#include <stdio.h>
#include "header.h"
/**
 *
 */

void print_alphabet_x10(void)
{
	int lowc;
	int times;

	for (times = 0; times <= 10; times++)
	{
		for (lowc = 97; lowc <= 122; lowc++)
		{
		_putchar(lowc);
		}

	_putchar('\n');
	}
}

