#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - free liust
 * @head: pointer to list
 */

void free_listint2(listint_t **head)
{
	listint_t *current = *head, *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	head = NULL;
}
