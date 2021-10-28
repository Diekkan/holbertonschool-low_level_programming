#include <stdlib.h>
#include <limits.h>
#include "main.h"
/**
 * malloc_checked - checks if memory is allocated correctly.
 *@b: n of ints to allocate.
 *Return: returns a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = (unsigned int *) malloc(sizeof(*p) * b);

	if ((p == NULL) || (b == INT_MAX))
		exit(98);
	else
	{
		return (p);
		free(p);
	}

}
