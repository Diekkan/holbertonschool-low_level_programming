#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies two numbers.
 *@argc: argument count.
 *@argv: argument value.
 *Return: 1 if error, 0 if succeed.
 */

int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", mul = atoi(argv[1]) * atoi(argv[2]));
	}

	return (0);
}
