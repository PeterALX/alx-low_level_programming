#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: pointer to hash table to be printed.
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i = 0, n = 0;

	if (ht == NULL)
		return;
	printf("{");

	for (i = n; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp)
		{
			printf("%s'%s': '%s'", n == 0 ? "" : ", ",
					tmp->key, tmp->value), n++;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
