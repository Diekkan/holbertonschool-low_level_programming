#include <stdio.h>

/**
 * main - the main function
 * Return: the value of return
 */
int main(void)
{
	int intType;
	char charType;
	float floatType;
	long int longintType;
	long long int longlongintType;

	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of chart: %zu byte(s)\n", sizeof(charType));
	printf("Size of float: %zu byte(s)\n", sizeof(floatType));
	printf("Size of long int: %zu byte(s)\n", sizeof(longintType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(longlongintType));

	return (0);
}
