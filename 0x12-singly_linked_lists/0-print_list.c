#include "lists.h"

/**
 * print_list - funct to print all elements of  a list_t linked list
 * @h: pointer to start of the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);

		else
			printf("[0] (nil)\n");

		i++;
		h = h->next;

	}
	return (i);

}
