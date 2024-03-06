#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table to print
 * Return: nothin
 */
void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i;
	hash_node_t *tmp;
	int flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		for (tmp = ht->array[i]; tmp != NULL; tmp = tmp->next)
		{
			if (flag)
			{
				printf(", ");
			}
			flag = 1;
			printf("'%s': '%s'", tmp->key, tmp->value);
		}
	}
	printf("}\n");
}
