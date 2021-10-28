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
	unsigned int *p, i;

	i = 0;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	p = (unsigned int *) malloc(size * nmemb);

	if (p == 0)
		return (NULL);

	while (nmemb <= i)
	{
		p[i] = 0;
		i++;
	}

	return (p);
}
