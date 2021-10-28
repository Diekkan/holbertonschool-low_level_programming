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
/**	unsigned int i; */
	void *p;

	if ((nmemb == 0) || (size == 0))
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);
	else
	{
		/**for(i = 0; i <= nmemb; i++)
			p[i] = 0; */

		return (p);
	}
}
