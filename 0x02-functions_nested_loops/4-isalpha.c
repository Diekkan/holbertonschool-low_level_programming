#include "main.h"
/**
 * _isalpha - checks for an alphabetic character.
 * @c: char input.
 * Return: 1 if it is ALPHA, 0 if it is not.
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90 && c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
