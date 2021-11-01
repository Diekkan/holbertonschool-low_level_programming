#include <stdio.h>
/**
 * main - a program that prints the name of the file it was compiled from.
 *Return: 0 success
 */

int main(void)
{
	printf(__FILE__);
	putchar(10);
	return (0);
}
