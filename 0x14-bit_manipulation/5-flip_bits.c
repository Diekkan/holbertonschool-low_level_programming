#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip to get from one
 * number to the other.
 * @n: the first int
 * @m: the second int
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bitFlip = 0;
	unsigned long int diff = n ^ m;

	while (diff > 0)
	{
		diff &= (diff - 1);
		bitFlip++;
	}
	return (bitFlip);
}
