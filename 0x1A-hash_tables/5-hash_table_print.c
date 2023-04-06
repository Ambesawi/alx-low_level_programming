#include "hash_tables.h"

/**
 * hash_table_print - prints in a hash table.
 * @ht: pointer to the hash table.
 * Return: the value  key or NULL if not found.
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *temp = NULL;

	if (!ht)
		return;

	printf("{");

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx])
		{
			printf("'%s': '%s'", ht->array[idx]->key, ht->array[idx]->value);
			idx++;
			break;
		}
	}

	while (idx < ht->size)
	{
		if (ht->array[idx])
		{
			temp = ht->array[idx];
			while (temp)
			{
				printf(", '%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
		idx++;
	}

	printf("}\n");
}
