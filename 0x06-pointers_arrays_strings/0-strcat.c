#include <stdio.h>
#include "main.h"
/**
 * _strcat - a function that concatenates two strings
 * @dest: dest string
 * @src: source string
 * Return: dest string modified
 */

char *_strcat(char *dest, char *src)
{
	int chs1;
	int chs2;

	for (chs1 = 0; dest[chs1] != '\0'; chs1++);
	
	for (chs2 = 0; src[chs2] != '\0'; chs2++)
	{
		dest[chs1 + chs2] = src[chs2];

	}
	
	dest[chs1 + chs2] = '\0';

	return (dest);
}
