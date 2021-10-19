#include <stdio.h>
#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte.
 * @s: A set in memory
 * @b: char to replace in memory
 * @n: amount of bytes to be replaced.
 * Return: The same set of memory but changed.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n;)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
