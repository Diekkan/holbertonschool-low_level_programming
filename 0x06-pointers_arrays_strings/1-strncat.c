#include <stdio.h>
#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: dest string
 * @src: source string
 * Return: dest string modified
 */

char *_strncat(char *dest, char *src, int n)
{
        int chs1;
        int chs2;

        for (chs1 = 0; dest[chs1] != '\0';)
	{
		chs1++;
	}

	for (chs2 = 0; chs2 < n && src[chs2] != '\0';)
	{
		dest[chs1] = src[chs2];
		chs2++;
		chs1++;
	}

	dest[chs1] = '\0';

	return (dest);
}
