#include "lists.h"

/**
 * sum_listint - func that returns sum of all the data in a listint_t list
 * @head: variable pointer to the beginning of the listint_t list
 * Return: sum of the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;

	}
	return (sum);

}
