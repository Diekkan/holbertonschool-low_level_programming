#include <stdio.h>
/**
 * main - a program that prints its name, followed by a new line.
 *@argc: argument count.
 *@argv: argument value.
 *Return: 0 success.
 */

int main(int argc, char *argv[])
{
	int i = argc - 1;

	printf("%s\n", argv[i]);

	return (0);
}
