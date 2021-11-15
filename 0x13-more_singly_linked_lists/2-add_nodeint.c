#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nNode;

	nNode = malloc(sizeof(listint_t));
	if (nNode == NULL)
		return (NULL);

	nNode->n = n;
	nNode->next = *head;
	*head = nNode;

	return (nNode);
}
