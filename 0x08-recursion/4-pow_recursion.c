#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to the power of y.
 *@x: value to be raised.
 *@y: raise x to this value.
 *Return: return result.
 */

int _pow_recursion(int x, int y)
{
	int i;

	if (y > 0)
	{
		i = x * _pow_recursion(x, y - 1);
		return (i);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}

}
