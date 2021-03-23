#include "lists.h"

/**
 * pop_listint - func to delete the head node of a listint_t list
 * @head: pointer to pointer to the beginning of the listint_t list
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *first;

	if (head == NULL || *head == NULL)
		return (0);

	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);

}
