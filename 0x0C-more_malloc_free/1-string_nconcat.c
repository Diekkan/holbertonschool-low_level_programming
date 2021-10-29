#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 *@s1: string 1.
 *@s2: string 2.
 *@n: n chars of s2.
 *Return: return pointer or null.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, m, lend;
	char *p;

	i = 0;
	j = 0;

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	if (n > 0)
		lend = (j - n) + 1;
	else if (n >= j)
		lend = j;
	else
		lend = 0;

	p = malloc(sizeof(char) * (i + lend + 1));

	for (m = 0; m <= i; m++)
		p[m] = s1[m];

	for (m = 0; m <= lend; m++)
		p[m + i] = s2[m];

	p[i + lend + 2] = 0;

	return (p);
}
