#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 *@head: first node.
 *@str: string to be duplicated.
 *Return: address of the new node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nNode, *lNode;

	if (!(head && str))
		return (NULL);

	nNode = malloc(sizeof(list_t));
	if (!nNode)
		return (NULL);

	nNode->str = strdup(str);
	if (!nNode->str)
	{
		free(nNode);
		return (NULL);
	}
	nNode->len = strlen(nNode->str);
	nNode->next = NULL;

	if (!*head)
	{
		*head = nNode;
		return (nNode);
	}

	lNode = *head;
	while (lNode->next)
	{
		lNode = lNode->next;
	}
	lNode->next = nNode;
	return (nNode);
}

