#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - main function
 * Return: number
 */

int main(void)
{
	int n;
	int N=n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of");
	
	if (n % 10 > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, N);
	}
	else if (n % 10 == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, N);
	}
	else if (n % 10 < 6 && !0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n N);
		return (0);
	}
}
