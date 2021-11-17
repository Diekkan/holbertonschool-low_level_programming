#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints list
 *@h: h
 *Return: count
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
