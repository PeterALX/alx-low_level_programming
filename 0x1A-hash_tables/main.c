#include "hash_tables.h"

int main(void)
{
	unsigned long  int i;
	hash_node_t *tmp;
	hash_table_t *ht = hash_table_create(100);

	hash_table_set(ht, "foo", "bar");


	for (i = 0; i < ht->size; i++)
	{
		for (tmp = ht->array[i]; tmp != NULL; tmp = tmp->next)
		{
			free(tmp->key); /* bad? */
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
	return (EXIT_SUCCESS);
}
