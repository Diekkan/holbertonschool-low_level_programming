#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: base string
 * @accept: string to be searched
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int j = 0;
	int is;

	while (*s != '\0')
	{
		is = 0;

		while (*(accept + j) != '\0')
		{
			if (*s == *(accept + j))
				is = 1;

			j++;
		}

		j = 0;

		if (is == 1)
			return (s);

		s++;
	}

	return (0);
}
