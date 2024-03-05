#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - sets a key in the hash table
 * @key: the key to be set 
 * @value: the value at that key
 * Return: 1 on success, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index] && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
