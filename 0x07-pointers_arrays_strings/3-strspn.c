#include <stdio.h>
#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string.
 * @accept: amount of bytes.
 * Return: Returns the number of bytes in the initial segment of s.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
       	unsigned int j = 0; 
	unsigned int v = 0;

	for (i = 0; s[i] != 0;)
	{
		if (i != v)
		{
			break;
		}
	
		for (j = 0; accept[j];)
		{
			if (s[i] == accept[j])
			{
				v++;
			}
			j++;
		}

		i++;
	}

	return (v);
}

