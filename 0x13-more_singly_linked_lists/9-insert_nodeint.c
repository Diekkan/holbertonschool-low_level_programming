#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index
 * @head: head
 * @idx: index
 * @n: value
 * Return: address to node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *h = NULL;
	listint_t *nNode;
	unsigned int i;

	if (head == NULL)
		return (h);

	i = 0;
	h = *head;

	while ((i + 2 < idx) && (h->next != NULL))
	{
		h = h->next;
		i++;
	}
	if (h->next == NULL)
	{
		if (i == idx)
		{
			nNode = malloc(sizeof(listint_t));
			if (nNode == NULL)
				return (NULL);
			h->next = nNode;
			nNode->next = NULL;
			return (nNode);
		}
		return (NULL);
	}
	else
	{
		nNode = malloc(sizeof(listint_t));
		if (nNode == NULL)
			return (NULL);
		nNode->n = n;
		nNode->next = h->next;
		h->next = nNode;
	}

	return (nNode);
}
