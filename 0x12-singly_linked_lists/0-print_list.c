#include "lists.h"
/**
 * print_list - a function that prints elements of a linked ls.
 *@h: address of the linked ls
 *Return: no of elements on the node
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		count++;
	}

	return (count);
}
