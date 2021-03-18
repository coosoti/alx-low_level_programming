#include "lists.h"
#include <string.h>

/**
 * add_node_end - func that adds new node at the end of a linked list
 * @head: double pointer to a struct
 * @str: str to be duplicated
 * Return: address of the new element or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *prevNode = *head;
	list_t *newNode;
	int i;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	i = 0;
	while (str[i] != '\0')
		i++;

	newNode->str = strdup(str);
	newNode->len = i;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	else
	{
		while (prevNode->next != NULL)
			prevNode = prevNode->next;
		prevNode->next = newNode;

	}
	return (newNode);

}
