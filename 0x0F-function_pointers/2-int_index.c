#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - int index.
 * @array: array itself.
 * @size: size of the array.
 * @cmp: compare function
 *
 * Return: error or  index.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, err;

	err = -1;
	if (array && size)
	{
		if (size <= 0)
			return (err);
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (err);
}
