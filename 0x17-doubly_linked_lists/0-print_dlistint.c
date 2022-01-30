#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *@h: pointer to head.
 *Return: number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *tmp = NULL;
	size_t no = 0;
	if (!h)
		return (0);
	tmp = (dlistint_t *) h;
	
	while (tmp)
	{
		printf("%d\n", tmp->n);
		no++;
		tmp = tmp->next;
	}

	return (no);
}
