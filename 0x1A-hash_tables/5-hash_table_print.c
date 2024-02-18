#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: The hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char flag = 0;  /* if data not yet printed */

	if (ht == NULL || ht->array == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
