#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: head
 * @index: index
 *Return: current
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	while (i < index)
	{
		current = head->next;
		if (current != NULL)
		{
			i++;
		}
		else
		{
			return (NULL);
		}
	}
	return (current);
}
