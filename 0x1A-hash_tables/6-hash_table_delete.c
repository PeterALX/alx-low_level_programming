#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 * Return: nothin
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long  int i;
	hash_node_t *tmp;
	hash_node_t *next;

	if (ht == NULL || ht->array == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = next;
		}
	}
	free(ht->array);
	free(ht);
}
