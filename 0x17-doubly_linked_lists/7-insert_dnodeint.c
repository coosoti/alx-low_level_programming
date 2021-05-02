#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the current dlistint_t list
 * @idx: index the new node will be inserted -- counting from 0
 * @n: value of the new node
 *
 * Return: address of the new node or NULL on failure
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current_node = *h;
	dlistint_t *new_node;
	unsigned int i = 0;

	new_node  = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (current_node != NULL)
	{
		if (i == idx - 1 && current_node->next == NULL)
			return (add_dnodeint_end(h, n));
		if (i == idx - 1)
		{
			new_node->next = current_node->next;
			new_node->prev = current_node;
			current_node->next = new_node;
			current_node = new_node;
			current_node->next->prev = new_node;
			return (new_node);
		}
		current_node = current_node->next;
		i++;
	}
	return (NULL);
}
