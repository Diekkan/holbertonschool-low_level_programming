#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that adds positive numbers.
 *@argc: argument counter.
 *@argv: argument values.
 *Return: 1 error, 0 success.
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int n = 0;

	for (i = 1; i < argc;)
	{
		if (argc == 1)
		{
			printf("0");
		}
		else if (atoi(argv[i]) < 0 && (argv[i] != 0))
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			n = n + atoi(argv[i]);
			i++;
		}

	}

	printf("%d\n", n);

	return (0);
}
