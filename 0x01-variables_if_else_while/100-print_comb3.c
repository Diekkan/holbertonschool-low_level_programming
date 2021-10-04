#include <stdio.h>
/**
 * main - main function
 * Return: 0 success
 */

int main(void)
{
	int digit1;
	int digit2;
	int newline = '\n';

	for (digit1 = '0'; digit1 <= '9' && digit1 != digit2; digit1++)
	{
	for (digit2 = '0'; digit2 <= '9' && digit2 != digit1; digit2++)
	{
		putchar(digit1);
		putchar(digit2);
	
	if (digit1 == '9' && digit2 == '8')
	{
	putchar(newline);
	}
	else 
	putchar(44);
	putchar(32);
	}
	}

	putchar(newline);

	return (0);
}
