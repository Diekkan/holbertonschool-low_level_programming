#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensions array.
 *@width: width of grid.
 *@height: height of grid.
 *Return: a pointer, or NULL if failure.
 */

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);
/* allocating memory for height first, rows...*/
	p = malloc(sizeof(int) * height);

	if (p == NULL)
		return (NULL);
/* allocating memory for every height allocated, every column... */
	for (i = 0; i < height;)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == NULL)
		{
			free(p);
			for (j = 0; j <= i; j++)
				free(p[j]);
			return (NULL);
		}
		i++;
	}
/* initializing every value in 0 */
	return (p);
}
