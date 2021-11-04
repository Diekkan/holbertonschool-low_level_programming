#include "3-calc.h"
/**
 * main - main function.
 * @argc: argument count
 * @argv: argument value
 *
 * Return: return op.
 */

int main(int argc, char *argv[])
{
	int res, a, b;
	int (*op) (int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	op = get_op_func(argv[2]);
	if (op == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = op(a, b);

	printf("%d\n", res);

	return (0);
}
