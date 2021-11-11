#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 *@head: first node.
 *@str: string to be duplicated.
 *Return: address of the new node.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *nNode;

	if (head == NULL || str == NULL)
		return (NULL);

	nNode = malloc(sizeof(list_t));
	if (nNode == NULL)
		return (NULL);

	nNode->str = strdup(str);
	nNode->len = strlen(nNode->str);
	nNode->next = *head;
	*head = nNode;

	free(nNode);
	return (nNode);
}
