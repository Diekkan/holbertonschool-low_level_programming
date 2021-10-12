#include <stdio.h>
#include "main.h"
/**
 * swap_int - swap value of two integers.
 * @a: a value
 * @b: b value
 */

void swap_int(int *a, int *b)
{
	int x = *b;
	int y = *a;
	*a = x;
	*b = y;
}
