#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: pointer to the hash_table
 * @key: key(string) in the key/value pair
 *
 * Return: the value associated with the element or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hashnode;
	unsigned long int i;

	if (ht == NULL)
		return (NULL);
	if (key[0] == '\0' || key == NULL)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	hashnode = ht->array[i];
	if (hashnode == NULL)
		return (NULL);

	while (hashnode != NULL)
	{
		if (strcmp(hashnode->key, key) == 0)
			return (hashnode->value);
		hashnode = hashnode->next;
	}
	return (NULL);
}
