#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array.
 *@min: min
 *@max: max
 *Return: return pointer.
 */


int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);
	else if (min == max)
		i = 1;
	else if (min < 0)
	{		
		i = - min;
		if (max < 0)
			i = i + max;
		else 
			i = i - max;
	}
	else
	{
		i = max - min;

	}

	p = (int *) malloc(sizeof(p) * i);

	if (p == NULL)
		return (NULL);

	for (i = 0; i + min <= max; i++)
		p[i] = i + min;

	return (p);
}
