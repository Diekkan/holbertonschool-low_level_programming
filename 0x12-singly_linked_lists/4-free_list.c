#include "lists.h"
/**
 * free_list -a function that frees a list_t list.
 *@head: first node.
 */
void free_list(list_t *head)
{
	list_t *current = head, *next;

	while (current)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}

	head = NULL;
}
