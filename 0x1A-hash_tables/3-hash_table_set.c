#include "hash_tables.h"

/**
 * hash_table_set - adds an element to a hash table
 * @ht: the hash table we wish to add key/value pair element to
 * @key: the key(string)
 * @value: the value associated with the key
 *
 * Return: 1 if successful, 0 on failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hashnode;
	hash_node_t *cur_hashnode;
	unsigned long int i;

	if (ht == NULL)
		return (0);
	if (key == NULL || key[0] == '\0')
		return (0);
	if (ht->size == 0 || ht->array == NULL)
		return (0);

	i = key_index((unsigned char *)key, ht->size);
	cur_hashnode = ht->array[i];

	while (cur_hashnode != NULL)
	{
		if (strcmp(cur_hashnode->key, key) == 0)
		{
			free(cur_hashnode->value);
			cur_hashnode->value = strdup(value);
			return (1);
		}
		cur_hashnode = cur_hashnode->next;
	}

	new_hashnode = malloc(sizeof(hash_node_t));
	if (new_hashnode == NULL)
		return (0);

	new_hashnode->key = strdup(key);
	new_hashnode->value = strdup(value);

	if (ht->array[i] != NULL)
		new_hashnode->next = ht->array[i];
	else
		new_hashnode->next = NULL;

	ht->array[i] = new_hashnode;
	return (1);
}
