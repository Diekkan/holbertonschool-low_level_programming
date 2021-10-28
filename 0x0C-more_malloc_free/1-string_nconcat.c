#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, m, lend;
	char *p;

	while (s1[i])
		i++;
	while (s2[j])
		j++;

	if (i + j == 0)
		return(NULL);
	if (n == 0)
	{	
		p = (char *) malloc(sizeof(char) * (i + 1));
		p = s1;
		return (p);
	}
	if (n < j)
	{
		lend = j - n;
		p = (char *) malloc(sizeof(char) * (i + lend) + 1);
		if (i == 0)
		{
			for (j = 0; j <= lend; j++)
				p[j] = s2[j];
			p[(i + lend) + 2] = '\0';
			return (p);
		}			
		else
		{
			for (j = 0; i >= j; j++)
			{
				p[j] = s1[j];
			}
			for (m = 0; m <= (lend + 1); m++)
				p[(m + i)] = s2[m];
			p[(i + lend) + 2] = '\0';
			return (p);
		}
	}
	else
	{
		 p = (char *) malloc(sizeof(char) * (i + j));
		 for (j = 0; i >= j; j++)
                                p[j] = s1[j];
		 for (m = 0; m <= j; m++)
                                p[m + i] = s2[m];
		 p[(i + j) + 1] = '\0';
                        return (p);
	}
}
