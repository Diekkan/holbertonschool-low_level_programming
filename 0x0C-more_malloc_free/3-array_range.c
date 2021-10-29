#include <stdlib.h>
/**
 * array_range - creates an array.
 *@min: min
 *@max: max
 *Return: return pointer.i
 */


int *array_range(int min, int max)
{
	int i, j;
	int *p;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		i = (max - min) + 1;
	}

	p = malloc(sizeof(int) * i);

	if (p == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		p[j] = j + min;

	return (p);
}
