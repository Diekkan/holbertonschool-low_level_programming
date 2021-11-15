#include <stdlib.h>
#include "lists.h"
/**
 *
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
