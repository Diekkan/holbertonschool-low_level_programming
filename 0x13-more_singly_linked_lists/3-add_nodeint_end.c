#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add node at  the end
 * @head: head
 * @n: n
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nNode, *lNode;

	if (!(head && n))
		return (NULL);

	nNode = malloc(sizeof(listint_t));
	if (!nNode)
		return (NULL);

	nNode->n = n;
	nNode->next = NULL;

	if (!*head)
	{
		*head = nNode;
		return (nNode);
	}

	lNode = *head;

	while (lNode->next)
		lNode = lNode->next;

	lNode->next = nNode;
	return (nNode);
}
