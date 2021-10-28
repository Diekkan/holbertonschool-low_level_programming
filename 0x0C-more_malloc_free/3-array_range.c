#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array.
 *@min: min
 *@max: max
 *Return: return pointer.i
 */


int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	else
 		i = max - min;

	if (i < 0)
		i = -i;

	p = (int *) malloc(sizeof(p) * (i + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; i + min <= max; i++)
		p[i] = i + min;

	return (p);
}
