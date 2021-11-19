#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: a bit
 * @index: location of bit
 * Return: int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	n = n >> index;
	n = n & 1;
	return (n);
}
