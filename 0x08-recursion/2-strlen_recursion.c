#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion -  a function that returns the length of a string.
 *@s: base string.
 *Return: return 0 or j.
 */
int _strlen_recursion(char *s)
{
	int i = 0;
	int j;

	if (s[i] != 0)
	{
		i++;
		j = _strlen_recursion(&s[i]) + 1;
		return (j);
	}
	else
	{
		return (0);
		_putchar(10);
	}
}
