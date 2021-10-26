#include <stdlib.h>
#include "main.h"
/**
 * str_concat - concatenates two strings.
 *@s1: first string
 *@s2: second string
 *Return: a pointer to the concatenation. NULL if fails.
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int i, j, len1, len2, lenf;

	len1 = 0;
	len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	lenf = len1 + len2;

	p = malloc(sizeof(char) * (lenf + 1));

	if (p == NULL)
		return (NULL);

	i = 0;
	j = 0;

	while (i < len1)
	{
		p[i] = s1[i];
		i++;
	}
	while (i < lenf)
	{
		p[i] = s2[j];
		i++;
		j++;
	}

	p[i] = '\0';

	return (p);
}
