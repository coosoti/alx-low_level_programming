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

/**
 * get_nodeint_at_index - func that returns the nth node of a listint_t list
 * @head: variable pointer to a struct
 * @index: index of node
 * Return: pointer to indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t len;
	unsigned int i = 0;

	len = listint_len(head);

	if (index > len)
		return (NULL);

	for (i = 0; i < index; i++)
		head = head->next;
	return (head);

}
