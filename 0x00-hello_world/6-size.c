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
	
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of chart: %zu bytes\n", sizeof(charType));
	printf("Size of float: %zu bytes\n", sizeof(floatType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));

	return (0);
}
