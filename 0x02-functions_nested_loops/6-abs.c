#include <stdio.h>
#include "main.h"
/**
 * _abs - prints the absolute value of an int.
 * @i: int number.
 * Return: 0 success.
 */

int _abs(int i)
{
	if (i >= 0)
		printf("%d", i);
	else
		printf("%d", -i);

	return (0);
}
