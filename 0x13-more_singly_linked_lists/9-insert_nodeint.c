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
 * insert_nodeint_at_index - func to insert a new node at a given position
 * @head: pointer pointing to the beginning of a listint_t list
 * @idx: index where new node should be added
 * @n: value of n member for the new node
 * Return: address of the new node or NULL on failure
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	size_t len;
	unsigned int i;
	listint_t *new_node;
	listint_t *prev_node = *head;

	len = listint_len(*head);

	if (idx > len)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1; i++)
		prev_node = prev_node->next;
	new_node->next = prev_node->next;
	prev_node->next = new_node;
	return (new_node);

}
