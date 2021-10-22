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
	int a = 0;
	int b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mul = a * b;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
