#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free list
 * @head: pointer to first
 */

void free_listint(listint_t *head)
{
	listint_t *current = head, *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	head = NULL;
}
