
#include "hash_tables.h"

/**
 * hash_node_delete - delete a node from a hash_table
 * @ht: the hash table to delete from
 * @key: the key to delete
 * Return: 1 if success 0 if fail
 */

int hash_node_delete(hash_table_t* ht, char* key)
{
	unsigned long int idx;
	hash_node_t *tmp;
	hash_node_t *prev;

	if (!ht || !key)
		return (0);

	idx = key_index((const unsigned char*)key, ht->size);
	tmp = ht->array[idx];
	prev = NULL;
	while (tmp)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			if (prev == NULL)
				ht->array[idx] = NULL;
			else
				prev = NULL;
			return (1);
		}
		prev = tmp;
		tmp = tmp->next;
	}
	return (0);
}
