#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated.
 * @ht: pointer to the hash table.
 * @key: is the key that we  look for.
 * Return: the value with the key or NULL if not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *) key, ht->size);

	temp = ht->array[idx];

	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	return (NULL);
}
