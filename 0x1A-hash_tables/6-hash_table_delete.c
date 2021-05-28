#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *cur_hashnode;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			cur_hashnode = ht->array[i];
			free(cur_hashnode->key);
			free(cur_hashnode->value);
			ht->array[i] = ht->array[i]->next;
			free(cur_hashnode);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
