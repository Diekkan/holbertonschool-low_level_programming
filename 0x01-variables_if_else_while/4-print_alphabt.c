#include <stdio.h>
/**
 * main - god function
 * Return: 0 success value
 */

int main(void)
{
	int lowc;
		char newline = '\n';

	for (lowc = 'a'; lowc <= 'z'; lowc++)
	{
	if (lowc != 'e' && lowc != 'q')
		putchar(lowc);
	}

	putchar(newline);

	return (0);
}
