#include <stdio.h>
#include "main.h"
/**
 * _strlen - a function that returns the lenght of a string.
 * @s: string.
 * Return: 0 success.
 */

int _strlen(char *s)
{
	int string = 0;

	while (*(s + string) != 0)
	{
		string++;
	}

	return (string);
}
