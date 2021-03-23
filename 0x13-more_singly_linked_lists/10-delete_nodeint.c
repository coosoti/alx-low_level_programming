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
 * delete_nodeint_at_index - funct that deletes the node at index of a
 * listint_t linked list.
 * @head: double pointer to the first node in the list
 * @index: index of the node to be delete
 *
 * Return: 1 on success and -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t len;
	unsigned int i;
	listint_t *temp;
	listint_t *prev_node = *head;

	len = listint_len(*head);

	if (index >= len)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);

	}

	for (i = 0; i < index - 1; i++)
		prev_node = prev_node->next;
	temp = prev_node;
	prev_node = prev_node->next;
	temp->next = prev_node->next;
	free(prev_node);
	return (1);

}
