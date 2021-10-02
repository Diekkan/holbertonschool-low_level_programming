#include <stdio.h>
/**
 * main - god function
 * Return: 0 success
 */

int main(void)
{
	int lowc;
	char newline = '\n';

	for (lowc = 'z'; lowc >= 'a'; lowc--)
	{
	putchar(lowc);
}
	putchar(newline);

	return (0);
}
