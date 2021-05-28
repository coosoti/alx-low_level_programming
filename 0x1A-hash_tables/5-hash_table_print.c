#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to be printed
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *cur_hashnode;
	unsigned long int i;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		cur_hashnode = ht->array[i];
		while (cur_hashnode != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'",
			       cur_hashnode->key, cur_hashnode->value);
			flag = 1;
			cur_hashnode = cur_hashnode->next;
		}
	}
	printf("}\n");
}
