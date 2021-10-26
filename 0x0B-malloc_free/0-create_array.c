#include <stdlib.h>
#include "main.h"
/**
 * create_array - a function that creates an array of chars.
 *@size: size of the array
 *@c: initialize in specific char.
 *Return: 0 success
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p == NULL)
		return (0);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	*(p + i) = '\0';

	return (p);
}
