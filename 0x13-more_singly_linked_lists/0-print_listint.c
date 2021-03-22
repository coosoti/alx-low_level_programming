#include "lists.h"

/**
 * print_listint - func to print all elements of a listint_t list
 * @h: pointer to struct
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;

	}
	return (counter);

}
