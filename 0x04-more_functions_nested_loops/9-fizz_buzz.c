#include <stdio.h>

/**
 * main -  a program that prints the numbers from 1 to 100.
 * Return: 0 success
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 5 == 0 && num % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else
		{
			printf("%d", num);
		}

		if (num != 100)
			printf(" ");
	}

	putchar (10);

	return (0);
}
