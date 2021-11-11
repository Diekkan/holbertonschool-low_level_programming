#include "lists.h"

/**
 * list_len - lenght of elements in the list.
 *@h: address of the linked list.
 *Return: no of elements in list.
 */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (h->str)
			count++;
		if (h->len)
			count++;
		h = h->next;
	}
	return (count);
}
