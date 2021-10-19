#include <stdio.h>
#include "main.h"
/**
 * _strchr - a function that locates a character in a string.
 * @s: string.
 * @c: character to be located on the string.
 * Return: a pointer to the first character c in s, or NULL if is not found.
 */

char *_strchr(char *s, char c)
{

	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}
		if (!*s)
		{
			return (0);
		}
	}
}
