#include <stdio.h>
#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 *@n: number.
 *Return: returns.
 */
int factorial(int n)
{
	int i;

	if (n > 0)
	{
	
		i = n * factorial (n - 1);
		return (i);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
