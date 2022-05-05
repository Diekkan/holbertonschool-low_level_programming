#include "search_algos.h"

/**
 * linear_search - makes a linear search
 *@array: array to look
 *@size: no of elements in the array
 *@value: value to look for
 *Return: returns -1 if not found, otherwise, index no.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (index);
		}
	}
	return (-1);
}
