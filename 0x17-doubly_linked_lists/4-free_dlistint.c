#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: head of the current list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;

	if (head == NULL)
		return;

	current_node = head->next;
	while (current_node != NULL)
	{
		free(head);
		head = current_node;
		current_node = current_node->next;
	}
	free(head);
}
