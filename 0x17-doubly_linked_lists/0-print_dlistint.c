#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head of the d linkedlist
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h  = h->next;
	}
	return (nodes);
}
