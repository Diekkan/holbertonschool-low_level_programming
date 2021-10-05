#include <stdio.h>
#include "main.h"
/**
 * _abs - prints the absolute value of an int.
 * @i: int number.
 * Return: 0 success.
 */

int _abs(int n)
{
	if (n >= 0) 
		return (n);
	else
		return (-n);
}
