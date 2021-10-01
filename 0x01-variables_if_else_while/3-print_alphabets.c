#include <stdio.h>
/**
 * main - god function
 * Return: 0 success
 */

int main(void)
{
	int lowc;
	char newline = '\n';

	for (lowc = 'a'; lowc <= 'z'; lowc++)
	putchar(lowc);

	if (lowc == 'z')
	lowc = 'A';

	for (lowc = 'A'; lowc <= 'Z'; lowc++)
	putchar(lowc);

	putchar(newline);

	return (0);
}
