#include <stdio.h>
#include "main.h"
/**
 * _isupper - a function that checks for uppercase character
 * @c: variable
 * Return: 1 if its an uppercase 0 if it's not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
