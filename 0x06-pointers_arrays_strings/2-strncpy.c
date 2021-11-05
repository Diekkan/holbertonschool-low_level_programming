#include <stdio.h>
#include "main.h"
/**
 * _strncpy - a function that copies a string.
 * @src: source string
 * @dest: dest string
 * @n: number of chars copied.
 *
 * Return: string dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
