#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - sum list elements
 * @head: head
 * Return: sum value
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (head == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
