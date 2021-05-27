#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: key(string) to input
 * @size: size of the array of the hash table
 *
 * Return: index at which key/value pair are stored in the hash table array
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;

	return (index);
}
