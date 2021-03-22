#include "lists.h"

/**
 * listint_len - func that returns the no of elements in a listint_t list
 * @h: pointer to a listint_t struct
 * Return: no of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;

	}
	return (counter);

}
