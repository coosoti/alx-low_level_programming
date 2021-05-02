#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at given index of a
 * dlistint_t linked list
 * @head: the head of the current dlistint_t list
 * @index: index of the node to be deleted
 *
 * Return: 1 if success, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	while (current_node != NULL)
	{
		if (i == index)
		{
			if (current_node->prev)
				current_node->prev->next = current_node->next;
			if (current_node->next)
				current_node->next->prev = current_node->prev;
			if (i == 0)
				*head = current_node->next;
			free(current_node);
			return (1);
		}
		current_node = current_node->next;
		i++;
	}
	return (-1);
}
