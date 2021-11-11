#include "lists.h"

/**
 * list_len - lenght of NODES in the list.
 *@h: address of the linked list.
 *Return: no of NODES in list.
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
