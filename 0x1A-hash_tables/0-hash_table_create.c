#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table)
	{
		table->size = size;
		table->array = malloc(sizeof(hash_node_t *) * size);
		if (!table->array)
		{
			free(table);
			return (NULL);
		}
		/* probably good idea to initialize table->array to NULL */
	}

	return (table);
}
