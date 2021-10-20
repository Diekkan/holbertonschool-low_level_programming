#include <stdio.h>
#include "main.h"
/**
 *  _sqrt - returns the natural square root of a number.
 *@n: square root this.
 *@i: integer.
 *Return: natural square root
 */

int _sqrt(int i, int n)
{

	if (i * i == n)
	{
	return (i);
	}
	else if (i > n / 2)
	{
	return (-1);
	}
	else
	{
	return (_sqrt(i + 1, n));
	}
}

/**
 *  _sqrt_recursion - returns the natural square root of a number.
 *@n: square root this.
 *Return: natural square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
