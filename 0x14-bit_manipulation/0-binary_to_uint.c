#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - binary to unsigned int.
 *@b: points to a string
 *Return: the converted no.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int sum = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] == '1' || b[i] == '0')
		{
			sum = ((sum * 2) + (b[i] - '0'));
		}
		else
		{
			return (0);
		}

		i++;
	}
	return (sum);
}
