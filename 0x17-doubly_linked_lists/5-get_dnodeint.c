#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: head of the current dlisint_t list
 * @index: index of the node to be returned --from 0
 *
 * Return: address of the nth node or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node = head;
	unsigned int nodes = 0;

	if (head == NULL)
		return (NULL);

	while (current_node != NULL)
	{
		nodes++;
		if ((nodes - 1) == index)
			return (current_node);
		current_node = current_node->next;
	}
	return (NULL);
}
