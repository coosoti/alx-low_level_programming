#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in the dlistint_t list
 * @head: head of the current dlistint_t list
 *
 * Return: the sum of the data in the dlistint_t list
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current_node = head;
	int sum = 0;

	if (head == NULL)
		return (0);

	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
