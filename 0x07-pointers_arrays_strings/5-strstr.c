#include <stdio.h>
#include "main.h"

/**
 * _strstr - a function that locates a substring.
 *@haystack: base string.
 *@needle: substring to be located in haystack.
 * Return: a pointer to the beginning, NULL if not located.
 */

char *_strstr(char *haystack, char *needle)
{
	char *res;
	char *aux;

	while (*haystack != '\0')
	{
		res = haystack;
		aux = needle;

		while (*aux == *haystack && *aux != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			aux++;
		}
		if (*aux == '\0')
			return (res);
		haystack = res + 1;
	}
	return (NULL);
}
