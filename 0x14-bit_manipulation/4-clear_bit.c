#include "main.h"

/**
 * clear_bit - sets bit at a given index to 0
 * @n: a given bit
 * @index: the location of said bit
 * Return: int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = *n, b = 1;

	if (index > 63)
		return (-1);

	a = ~a;
	b = b << index;
	b = a | b;
	b = ~b;
	*n = b;
	return (1);
}
