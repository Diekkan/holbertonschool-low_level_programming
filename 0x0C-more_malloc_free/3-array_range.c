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
	int i, j;
	int *p, *q;

	if (min > max)
		return (NULL);
	else
 		i = (max - min) + 1;

	p = q = (int *) malloc(sizeof(p) * i);

	if (p == NULL)
		return (NULL);

	j = 0;
	while (j < i)
	{
		p[j] = j + min;
		j++;
	}

	/*for (i = 0; i + min <= max; i++)
		p[i] = i + min; */

	return (q);
}
