#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *@head: first node.
 *@str: string to be duplicated.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *beg;

	beg = malloc(sizeof(list_t));
	if (beg == NULL)
		return (NULL);
	if (str != NULL)
		beg->str = strdup(str);
	beg->next = *head;

	return(beg->next);
}
