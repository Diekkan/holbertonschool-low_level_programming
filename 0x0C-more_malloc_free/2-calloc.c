#include <stdlib.h>
#include "main.h"
/**
 * _calloc - sets all malloc values to 0.
 *@nmemb: elements of the array.
 *@size: number of bytes.
 *Return: returns pointer p.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p, *q;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	p = q = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		*p++ = 0;

	return (q);
}
