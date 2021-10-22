#include <stdio.h>

/**
 * main -  a program that prints all arguments it receives.
 *@argc: argument count.
 *@argv: argument values.
 *Return: 0 success.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (; i < argc;)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
