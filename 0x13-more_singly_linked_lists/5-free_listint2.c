#include "lists.h"

/**
 * free_listint2 - a func to free a listint_t list
 * @head: double pointer to the beginning of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;

	}
	*head = NULL;

}
