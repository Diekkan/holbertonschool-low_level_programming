
#include <stdio.h>

/**
 * main - main function
 * Return: 0 success
*/

int main(void)
{
        int alpha;

	for (alpha = 48; alpha <= 57; alpha++)
	{
	putchar(alpha);
	if (alpha < 57)
	{
	putchar(44);
	putchar(32);
	}

	}


        putchar('\n');

       return (0);
}
