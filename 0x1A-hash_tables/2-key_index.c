#include "hash_tables.h"
#include <string.h>

/**
 * key_index - for index of the key
 * @key: key (string)
 * @size: size of the array
 * Return: key/value pair should be stored in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
