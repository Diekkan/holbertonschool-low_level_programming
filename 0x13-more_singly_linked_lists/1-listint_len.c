#include <stdio.h>
#include "lists.h"
/**
 *
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count++);
}
