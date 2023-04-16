#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_


#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - Node of a hash_table
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash_table data structure
 * @size: The size of the array
 * @array: An array of size @size
 */

typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
hash_node_t *create_new_node (const char *key, const char *value);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
void free_hash_list(hash_node_t *head);
shash_table_t *shash_table_create(unsigned long int size);
shash_node_t *make_shash_node(const char *key, const char *value);
void add_to_sorted_list(shash_table_t *table, shash_node_t *node);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif
