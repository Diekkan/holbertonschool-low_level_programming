#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - poplistin
 * @head: head
 */

int pop_listint(listint_t **head)
{
	listint_t *h;
	int n;

	if (head == NULL)
		return (0);

	h = *head;
	*head = (*head)->next;
	n = h->n;
	free(h);

	return (n);
}
