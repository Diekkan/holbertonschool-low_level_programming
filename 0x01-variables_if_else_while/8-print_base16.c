#include <stdio.h>
/**
 * main - main function
 * Return: 0 success
 */
int main(void)
{
        int n;
	char alpha;

        for (n = 48; n <= 57; n++)
        putchar(n);
	
	for (alpha = 'a'; alpha >= 'f'; alpha++)
	putchar(alpha);

        putchar('\n');

	return (0);
}
