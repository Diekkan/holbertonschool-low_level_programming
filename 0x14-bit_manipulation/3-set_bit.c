#include "main.h"

/**
 * set_bit - sets the value of a given bit to 1
 * @n: a given bit
 * @index: the index of the bit
 * Return: int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = *n, b = 1;

	if (index > 63)
		return (-1);

	b = b << index;
	b = a | b;
	*n = b;
	return (1);
}
