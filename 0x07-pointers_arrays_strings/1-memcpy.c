#include <stdio.h>
#include "main.h"
/**
 * _memcpy -  a function that copies memory area.
 * @dest: memory to be pasted.
 * @src: memory to be copied.
 * @n: number of bytes to be copied.
 * Return: return the segment of memory that's been copied.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n;)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
