#include <stdio.h>
#include "main.h"

int print_last_digit(int d)
{
	int lastdig = d % 10;

	printf("%d", lastdig);
}
