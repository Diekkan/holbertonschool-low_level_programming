#include "main.h"
/**
 * reverse_array -
 *@a:
 *@n:
 */

void reverse_array(int *a, int n)
{	
	int count = 0;
	int large = n;

	for (; n >= 0;)
	{
		a[count] = a[n];
		for (; count <= large;)
		{
			count++;
		}
		
		n--;
	}
}
