#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 *@s1:
 *@s2:
 *@n:
 *Return:
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, m , lend;
	char *p;

	while(s1[i])
		i++;
    	while(s2[j])
		j++;
	
	if (n > 0)
	    lend = j - n;
	else if (n >= j)
		lend = j;
	else
		lend = 0;

	p = malloc(sizeof(char) * (i + lend + 1));

	for (m = 0; m <= i; m++)
		p[m] = s1[m];

	for(m = 0; m <= (lend + 1); m++)
		p[m + i] = s2[m];

	p[i + lend + 2] = 0;
	
	return(p);
}
