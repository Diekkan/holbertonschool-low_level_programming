#include <stdio.h>

/**
 * main -  a program that prints the number of arguments passed into it.
 *@argc: argument count.
 *@argv: argument values.
 *Return: 0 if succeed.
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int n = 0;

	for (; i < argc - 1;)
	{
		for (; argv[n] != 0;)
		{
			n++;
		}
		n = 0;
		i++;
	}

	printf("%d\n", i);

	return (0);
}
